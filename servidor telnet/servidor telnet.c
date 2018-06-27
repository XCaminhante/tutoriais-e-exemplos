#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/times.h>
#include <sys/select.h>
#include <sys/stat.h>

#include <netinet/in.h>

#define PORTA 8080
#define SERVIDOR_CHEIO "Servidor cheio\n"
#define DIGA_SEU_NOME "Seu apelido: "
#define BOAS_VINDAS "Conectado\n"
#define MAX_USUARIOS 65535
#define MAX_MENSAGEM 1023

typedef struct Cliente {
   int soquete;
   char *nome;
   struct Cliente *prox;
} Cliente;

int max_usuarios = MAX_USUARIOS;
int numero_clientes = 0;
Cliente *lista_clientes = NULL;
char mensagem[MAX_MENSAGEM+1];

void mostrar_ajuda (char *nome_prog) {
   printf(
      "Servidor de chat telnet simples, por Caminhante\n"
      "Uso: %s <porta> [<limite de usuários>]\n",
      nome_prog
   );
}

Cliente *procurar_cliente (char *nome) {
   Cliente *cli = lista_clientes;
   while (cli) {
      if (strcmp(cli->nome, nome) == 0)
         return cli;
      cli = cli->prox;
   }
   return NULL;
}

int novo_cliente (int soquete, char *nome) {
   Cliente *novocli = procurar_cliente(nome);
   if (novocli != NULL) {
      puts("Usuário já na lista");
      return 0;
   }
   novocli = (Cliente*)malloc(sizeof(Cliente));
   if (novocli == NULL) {
      puts("Falha ao alocar memória");
      exit(-9);
   }
   printf("Novo cliente: %s\n", nome);
   novocli->soquete = soquete;
   novocli->nome = nome;
   novocli->prox = lista_clientes;
   lista_clientes = novocli;
   numero_clientes ++;
   return 1;
}

void esquecer_cliente (Cliente *cli) {
   Cliente *anterior = NULL;
   Cliente *navegar = lista_clientes;
   while (navegar) {
      if (navegar == cli) {
         if (anterior == NULL) {
            lista_clientes = navegar->prox;
         } else {
            anterior->prox = navegar->prox;
         }
         printf("Esquecendo %s\n", navegar->nome);
         free(navegar->nome);
         free(navegar);
         numero_clientes --;
         return;
      }
      anterior = navegar;
      navegar = navegar->prox;
   }
}

int preparar_servidor (int porta) {
   int soq_servidor = socket(AF_INET, SOCK_STREAM, 0);
   if (soq_servidor < 0) {
      perror("Preparando servidor");
      return -4;
   }
   struct sockaddr_in sin;
   sin.sin_family = AF_INET;
   sin.sin_addr.s_addr = INADDR_ANY;
   sin.sin_port = htons(porta);
   if (bind(soq_servidor, (struct sockaddr *) &sin, sizeof(sin))) {
      perror("Reservando porta para o servidor");
      return -5;
   }
   if (listen(soq_servidor, 5) < 0) {
      perror("Escutando soquete do servidor");
      return -6;
   }
   printf("Esperando clientes na porta %d...\n", porta);
   return soq_servidor;
}

void remover_quebra_linha_mensagem (int recebido) {
   mensagem[recebido] = 0;
   while ( mensagem[--recebido] == '\n' || mensagem[recebido] == '\r') {
      mensagem[recebido] = 0;
   }
}

void aceitar_nova_conexao (int soq_servidor) {
   int soq_novocli = accept(soq_servidor, NULL, NULL);
   if (soq_novocli < 0) {
      perror("Aceitando nova conexão");
      return;
   }
   if (numero_clientes == max_usuarios) {
      puts("Conexão recusada por excesso de usuários");
      write(soq_novocli, SERVIDOR_CHEIO, sizeof(SERVIDOR_CHEIO));
      close(soq_novocli);
      return;
   }
   write(soq_novocli, DIGA_SEU_NOME, sizeof(DIGA_SEU_NOME));
   int recebido = read(soq_novocli, mensagem, MAX_MENSAGEM);
   if (recebido <= 0) {
      perror("Recebendo dados do novo cliente");
      close(soq_novocli);
      return;
   }
   remover_quebra_linha_mensagem(recebido);
   write(soq_novocli, BOAS_VINDAS, sizeof(BOAS_VINDAS));
   char *nome = malloc(recebido+1);
   if (nome == NULL) {
      puts("Falha ao alocar memória");
      exit(-10);
   }
   strcpy(nome, mensagem);
   novo_cliente(soq_novocli,nome);
}

void distribuir_mensagem (Cliente *cli) {
   int recebido = read(cli->soquete, mensagem, MAX_MENSAGEM);
   if (recebido <= 0) {
      perror("Recebendo dados de um cliente");
      close(cli->soquete);
      esquecer_cliente(cli);
      return;
   }
   remover_quebra_linha_mensagem(recebido);
   Cliente *outros = lista_clientes;
   int tam_nome = strlen(cli->nome);
   printf("Mensagem recebida de %s\n", cli->nome);
   while (outros) {
      if (outros != cli) {
         write(outros->soquete, cli->nome, tam_nome);
         write(outros->soquete, ": ", 2);
         write(outros->soquete, mensagem, recebido);
         write(outros->soquete, "\n", 1);
      }
      outros = outros->prox;
   }
}

int verificar_soquetes (int soq_servidor) {
   static struct timeval tempo_select = {2,0}; // 2 segs
   fd_set conj_soquetes;
   FD_ZERO(&conj_soquetes);
   FD_SET(soq_servidor, &conj_soquetes);
   Cliente *navegar = lista_clientes;
   while (navegar) {
      FD_SET(navegar->soquete, &conj_soquetes);
      navegar = navegar->prox;
   }
   int t;
   if ( (t = select(FD_SETSIZE, &conj_soquetes, NULL, NULL, &tempo_select)) < 0 ) {
      perror("Verificando soquetes");
      return -7;
   }
   if (t > 0) {
      if (FD_ISSET(soq_servidor, &conj_soquetes)) {
         aceitar_nova_conexao(soq_servidor);
      }
      navegar = lista_clientes;
      while (navegar) {
         if ( FD_ISSET(navegar->soquete, &conj_soquetes) ) {
            distribuir_mensagem(navegar);
         }
         navegar = navegar->prox;
      }
   }
   return 0;
}


int main(int argc, char *argv[]) {
   if (argc == 1) {
      mostrar_ajuda(argv[0]) ;
      return -1 ;
   }
   if (argc > 2) {
      max_usuarios = atoi(argv[2]);
   }
   if (max_usuarios <= 0 || max_usuarios > MAX_USUARIOS) {
      puts("Valor de limite máximo de usuários inválido");
      return -2;
   }
   int porta = atoi(argv[1]);
   if (porta < 1 || porta > 49151) {
      puts("Valor de porta do servidor inválido");
      return -3;
   }
   int soq_servidor = preparar_servidor(porta);
   if (soq_servidor < 0)
      return soq_servidor;

   while (1) {
      usleep(200);
      printf("%d conectado(s)\n", numero_clientes);
      int ret = verificar_soquetes(soq_servidor);
      if (ret) return ret;
   }
   return 0;
}
