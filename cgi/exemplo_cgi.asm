; Compile com fasm
format elf executable 3
entry início
  include 'proc32.inc'
  include 'symbols.inc'

segment executable
  include 'print.inc'

  proc início, argv, envp
    stdcall print, cabeçalho_http, STDOUT
    stdcall print, texto_informativo, STDOUT

    mov ecx, [argv-4]
    dec ecx
    jz .variáveis

    .argumentos:
      stdcall print, argumentos, STDOUT
      lea eax, [argv+4]
      .para_cada_arg:
        stdcall print_z, [eax], STDOUT
        stdcall print, novalinha, STDOUT
        add eax, 4
      loop .para_cada_arg

    .variáveis:
      cmp [envp+4], 0
      jz .fim
      stdcall print, variáveis, STDOUT
      lea eax, [envp+4]
      .para_cada_var:
        cmp [eax], dword 0
        jz .fim
        stdcall print_z, [eax], STDOUT
        stdcall print, novalinha, STDOUT
        add eax, 4
      jmp .para_cada_var

    .fim:
    mov eax, sys_exit
    mov ebx, 0
    int 80h
  endp

  cabeçalho_http texto \
     <'Content-type: text/plain; charset=utf-8',13,10,13,10>
  texto_informativo texto \
     <'Olá humano! O que você está vendo neste exato instante talvez seja a ',\
      'primeira página web gerada por um programa em Assembly que você viu na vida!',10,10>

  argumentos texto <'argumentos:', 10>
  variáveis texto <'variáveis:', 10>

  novalinha texto 10
