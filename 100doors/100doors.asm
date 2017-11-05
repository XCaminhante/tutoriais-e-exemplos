;Compile com `fasm 100doors.asm`
;Executa em sistema baseado em Linux, Intel de 32 ou 64 bits

format elf executable 3         ; elf32-i386
entry início                    ; onde meu programa começa

include 'proc32.inc'            ; macros para subrotinas estilosas do FASM (vem na instalação básica)

segment readable        ; nossas constantes
txt1 db 'Porta #'
  .tam = $-txt1         ; $ é a posição atual no arquivo
txt2 db ' aberta',10    ; 10 é uma quebra de linha
  .tam = $-txt2         ; .tam é um símbolo com um valor numérico

segment readable executable     ; código executável
; Pra evitar usar a pilha, passo todos os parâmetros das rotinas
;   nos registradores.

; Envelope pra syscall que escreve na saída do terminal
proc escrever
  mov eax, 4    ; sys_write, escreve dados pra um ponteiro de arquivo
  mov ebx, 1    ; ponteiro de arquivo; 1=stdout
  ; ecx vem com o ponteiro pro texto
  ; edx vem com o comprimento do texto (txt1.tam, por exemplo)
  int 80h
  ret
endp

; Essa rotina parece grande, mas reparem nos rótulos. Tudo organizado.
; Tem como usar printf, mas qual seria a graça?
proc mostrar_portas_abertas
local num:DWORD           ; reserva uma dword na pilha
  mov [num], dword '0000' ; só vamos usar os três primeiros bytes
  mov al, 0
  mov ebx, portas-1
.proximo_numero:
  cmp al, 0ffh  ; condição de fim atingida após ter contado até 100
  je .fim
  inc al
  cmp al, 10
  je .atualizar_dezena
  inc byte [num+2] ; unidade
  jmp .teste
.atualizar_dezena:
  mov al, 0
  sub byte [num+2], 9
  inc ah
  cmp ah, 10
  je .atualizar_centena
  inc byte [num+1] ; dezena
  jmp .teste
.atualizar_centena:
  mov ah, 0
  sub byte [num+1], 9
  inc byte [num]   ; centena
  mov al, 0ffh     ; condição de fim
.teste:
  inc ebx
  cmp [ebx], byte 1 ; 0=fechada, 1=aberta
  jne .proximo_numero
.escrever:
  push eax
  push ebx

  mov ecx, txt1
  mov edx, txt1.tam
  stdcall escrever

  lea ecx, ptr num      ; ptr num = [num], é só açúcar sintático
  mov edx, 3            ; os três primeiros bytes de num vão pra tela
  stdcall escrever

  mov ecx, txt2
  mov edx, txt2.tam
  stdcall escrever
  
  pop ebx
  pop eax
  jmp .proximo_numero
.fim:
  ret
endp

proc início
  mov eax, 0
.fazer_100_passagens:
  inc eax
  stdcall alternar_portas
  cmp eax, 100
  jb .fazer_100_passagens
  
  stdcall mostrar_portas_abertas

  mov eax, 1    ; sys_exit, adivinha o que ela faz?
  xor ebx, ebx  ; código de erro 0: execução bem sucedida.
  int 80h
endp

; Alterna o estado de cada porta de número múltiplo de eax.
proc alternar_portas
  mov ebx, portas-1
.prox_porta:
  add ebx, eax
  xor [ebx], byte 1     ; Se a porta está 0, vira 1; se 1, vira 0
  cmp ebx, portas+99
  jb .prox_porta
  ret
endp

segment readable writeable
; Esse segmento não vai adicionar nenhum espaço físico no executável final.
; O Linux vai inicializar isso aqui pra gente
;   preenchendo com bytes zero, só na hora da execução.

portas rb 100 ; reservados 100 bytes
