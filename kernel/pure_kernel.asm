format elf

public start
public multiboot
public kernel_stack
extrn linkp
extrn linkd
extrn linkb
extrn _end

TEXT_VGARAM equ 0xb8000

BLACK equ 0
BLUE equ 1
GREEN equ 2
CYAN equ 3
RED equ 4
MAGENTA equ 5
BROWN equ 6
LIGHT_GRAY equ 7
GRAY equ 8
LIGHT_BLUE equ 9
LIGHT_GREEN equ 10
LIGHT_CYAN equ 11
LIGHT_RED equ 12
LIGHT_MAGENTA equ 13
LIGHT_BROWN equ 14
WHITE equ 15

macro cor letra,fundo {
  mov ah, letra + fundo*16
}

struc texto conteudo, letra, fundo {
  @@: db conteudo
  .tam = $-@b
  .cor = letra + fundo*16
}

section '.text' executable
start:
  jmp main

align 4
multiboot:
  MULTIBOOT_PAGE_ALIGN   equ (1 shl 0)
  MULTIBOOT_AOUT_KLUDGE  equ (1 shl 16)
  MULTIBOOT_HEADER_MAGIC equ 0x1BADB002 ;Multiboot Magic
  MULTIBOOT_HEADER_FLAGS equ MULTIBOOT_PAGE_ALIGN + MULTIBOOT_AOUT_KLUDGE
  MULTIBOOT_CHECKSUM     equ -(MULTIBOOT_HEADER_MAGIC + MULTIBOOT_HEADER_FLAGS)

  dd MULTIBOOT_HEADER_MAGIC
  dd MULTIBOOT_HEADER_FLAGS
  dd MULTIBOOT_CHECKSUM

  dd multiboot
  dd linkp
  dd linkd
  dd linkb
  dd start
  dd _end

main:
  mov esp, kernel_stack
  push 0
  popf

  push ebx ;multiboot magic number
  push eax ;multiboot-info structure

  call clr
  mov bx, 1
  mov dx, 1
  mov al, t1.tam
  mov ah, t1.cor
  mov ecx, t1
  call print_XY

  add bx, t1.tam
  mov al, t2.tam
  mov ah, t2.cor
  mov ecx, t2
  call print_XY

  mov bx, 1
  inc dx
  mov ah, t3.cor
  mov al, t3.tam
  mov ecx, t3
  call print_XY

  add bx, t3.tam
  mov ah, t4.cor
  mov al, t4.tam
  mov ecx, t4
  call print_XY

  .kernel_limbo:
  cli
  hlt
  jmp .kernel_limbo
  ret

; al: caractere
; ah: cor
; bx: coluna
; dx: linha
putchar_XY:
  push eax ebx edx edi
  cld
  mov edi, TEXT_VGARAM
  dec dx
  dec bx
  imul bx, 2
  imul dx, 80*2
  add bx, dx
  add edi, ebx
  stosw
  pop edi edx ebx eax
  ret

; al: quantos caracteres (máximo 80)
; ah: cor
; bx: coluna inicial
; ecx: ponteiro da string
; dx: linha inicial
print_XY:
  push eax ebx ecx edx esi edi
  mov esi, ecx
  xor ecx, ecx
  mov cl, al
  cld
  mov edi, TEXT_VGARAM
  dec dx
  dec bx
  imul bx, 2
  imul dx, 80*2
  add bx, dx
  add edi, ebx
  .print_loop:
    lodsb
    stosw
    loop .print_loop
  pop edi esi edx ecx ebx eax
  ret

clr:
  push eax ecx edi
  cld
  mov edi, TEXT_VGARAM
  mov al, ' '
  mov ah, 0x0f
  mov ecx, 80*25
  rep stosw
  pop edx ecx eax
  ret

section '.bss' writeable
rb 1024
kernel_stack:

t1 texto "Hello, i'm your kernel ", WHITE,BLACK
t2 texto "AND I AM FUCKING ALIVE!", LIGHT_RED,BLACK
t3 texto "Now with colors! ", LIGHT_CYAN,BLACK
t4 texto "A W E S O M E", LIGHT_GREEN,BLACK
