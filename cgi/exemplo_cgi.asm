format elf executable 3
entry início

include 'proc32.inc'
include 'symbols.inc'

struc texto txt {
  .txt db txt
  .tam = $-.txt
}

macro write dest,txt {
  push eax ebx ecx edx
  mov eax, sys_write
  mov ebx, dest
  mov ecx, txt
  mov edx, txt#.tam
  int 80h
  pop edx ecx ebx eax
}

macro exit status {
  mov eax, sys_exit
  mov ebx, status
  int 80h
}

segment executable

proc início, .argv, .envp
begin
  write STDOUT, cabeçalho_http
  write STDOUT, texto_informativo
  ; lista as variáveis de ambiente; envp é entregue como um vetor linear
  cmp [.envp+4], 0
  jz .fim
  write STDOUT, variáveis
  lea eax, [.envp+4]
  .para_cada_var:
    cmp [eax], dword 0
    jz .fim
    stdcall printz, [eax], STDOUT
    write STDOUT, novalinha
    add eax, 4
    jmp .para_cada_var

  .fim:
  exit 0
endp

proc printz, .txt
begin
  push eax ebx ecx edx edi
  ; encontrar o byte 0 no final
  mov edi, [.txt]
  mov al, 0
  mov ecx, 65535
  repne scasb
  add ecx, -65535
  add edi, ecx
  not ecx
  ; trivial
  mov edx, ecx
  mov eax, sys_write
  mov ebx, STDOUT
  mov ecx, edi
  int 80h
  pop edi edx ecx ebx eax
  return
endp

cabeçalho_http texto \
  <'Content-type: text/plain; charset=utf-8',13,10,13,10>
texto_informativo texto \
  <'Olá! O que você está vendo talvez seja a primeira página web ',\
   'gerada por um programa em Assembly que você viu na vida!',10,10>

variáveis texto <'variáveis:', 10>
novalinha texto 10
