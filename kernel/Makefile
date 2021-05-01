all: vmkernel

vmkernel: boot/bloader.asm kernel/kernel.c include/stdio.h include/multiboot.h
	fasm boot/bloader.asm
	gcc -m32 -Wall -std=gnu99 -nostdlib -I./include \
		boot/link.ld boot/bloader.o kernel/kernel.c \
		-o vmkernel
	strip vmkernel

pure_asm: pure_kernel.asm
	fasm pure_kernel.asm
	gcc -m32 -Wall -nostdlib boot/link.ld pure_kernel.o -o vmkernel
	strip vmkernel

emulate: vmkernel
	qemu-system-i386 -kernel vmkernel
