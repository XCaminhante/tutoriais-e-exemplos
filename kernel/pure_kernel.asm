format elf

public start
public multiboot
public kernel_stack
extrn linkp
extrn linkd
extrn linkb
extrn _end

include 'proc32.inc'

VIDEO_VRAM equ 0xb8000

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

proc main
  mov esp, kernel_stack
  push 0
  popf
  mov [term_color], LIGHT_GRAY+BLACK*16

  push ebx ;multiboot magic number
  push eax ;multiboot-info structure

  stdcall clr
  mov al, 'X'
  stdcall putchar

  .kernel_limbo:
  cli
  hlt
  jmp .kernel_limbo
endp

proc clr
  push eax ecx edi
  cld
  mov edi, VIDEO_VRAM
  mov eax, 0x000f
  mov ecx, 80*25
  rep stosw
  pop edx ecx eax
  ret
endp

proc putchar
  push ebx ecx edx
  cmp al, 10
  je .newline
  .prepare:
  push eax
  xor ebx, ebx
  xor edx, edx
  mov ecx, 25
  xor eax, eax
  .calcule_addr:
  mov bl, [src_column]
  mov al, [src_line]
  mul ecx
  add ebx, eax
  .print:
  pop eax
  shl ax, 8
  mov al, [term_color]
  mov [VIDEO_VRAM+ebx], ax
  cmp [src_column], 79
  je .newline
  inc [src_column]
  jmp .end
  .newline:
  mov [src_column], 0
  inc [src_line]
  cmp [src_line], 25
  jne .end
  mov [src_line], 0
  .end:
  pop edx ecx ebx
  ret
endp

section '.bss' writeable
term_color rb 1
src_line rb 1
src_column rb 1

rb 48*1024
kernel_stack:
