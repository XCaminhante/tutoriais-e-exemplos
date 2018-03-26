format elf

public start
public multiboot
public kernel_stack
extrn main
extrn linkp
extrn linkd
extrn linkb
extrn _end

section '.text' executable
start:
  jmp startup
align 4
multiboot:
  KERNEL_STACK_SIZE      equ 16384 ;size of the kernel Stack
  MULTIBOOT_PAGE_ALIGN   equ (1 shl 0)
  MULTIBOOT_AOUT_KLUDGE  equ (1 shl 16)
  MULTIBOOT_HEADER_MAGIC equ 0x1BADB002 ;Multiboot Magic
  MULTIBOOT_HEADER_FLAGS equ MULTIBOOT_PAGE_ALIGN or MULTIBOOT_AOUT_KLUDGE
  MULTIBOOT_CHECKSUM     equ -(MULTIBOOT_HEADER_MAGIC + MULTIBOOT_HEADER_FLAGS)

  ;This is the GRUB Multiboot header. A boot signature
  dd MULTIBOOT_HEADER_MAGIC
  dd MULTIBOOT_HEADER_FLAGS
  dd MULTIBOOT_CHECKSUM

  ;AOUT kludge - must be physical addresses. Make a note of these:
  ;The linker script fills in the data for these ones!
  dd multiboot
  dd linkp
  dd linkd
  dd linkb
  dd start
  dd _end

;Startup the Kernel
startup:
  mov esp, kernel_stack ;This points the stack to our new stack area
  push 0 ;Clear the stack
  popf
  push ebx ;Save the multiboot magic number
  push eax ;Save the multiboot-info structure

  call clr   ;Clear the screen
  call main ;Call the main() function

  .kernel_limbo:
  cli               ;Stop interrupts service
  hlt               ;Halt the kernel(if we quit the main())
  jmp .kernel_limbo ;Endless loop, if we accidently quit from the kernel

;Clear the Screen
clr:
  cld ;Clear direction flag  DF = 0;
  mov edi, 0b8000h ;Screen VRAM space address
  mov esi, 0       ;Character to write
  mov ecx, 80*25   ;Times to repeat
  mov eax, 0x0f    ;Attributes
  rep stosw        ;Repeat 'stows' CX(ECX) times
  ret

section '.bss' writeable
rb KERNEL_STACK_SIZE  ;This reserves 16 KBytes of stack space
kernel_stack:

