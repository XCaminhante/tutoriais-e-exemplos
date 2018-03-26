all: vmkernel

vmkernel: boot/bloader.asm kernel/kernel.c include/kernel.h include/multiboot.h
	fasm boot/bloader.asm
	gcc -Wall -std=gnu99 -nostdlib -I./include \
		boot/link.ld boot/bloader.o kernel/kernel.c \
		-o vmkernel

emulate: vmkernel
	qemu -kernel vmkernel
