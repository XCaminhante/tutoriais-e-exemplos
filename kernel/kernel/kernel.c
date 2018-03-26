#include <kernel.h>
#include <multiboot.h>

int main (unsigned long magic, unsigned long mboot_struct) {
  multiboot_info_t *mbi = (multiboot_info_t*)mboot_struct;
  if (magic!=MULTIBOOT_BOOTLOADER_MAGIC) {
    print("FUCK, invalid magic number...");
    return 0xBADC0DE;
  }
  print("Hello, i'm your kernel AND I AM FUCKING ALIVE!");
  new_line();
  print((char *)mbi->boot_loader_name); //Display GRUB/Syslinux/our bootloader version
}

static unsigned scr_line = 0, scr_column = 0;

void print (const char *str){
  while (*str)
    putchar(*str++);
}

void putchar (char ch) {
  VIDEO_VRAM[(scr_line*80 + scr_column)*2] = ch;
  VIDEO_VRAM[(scr_line*80 + scr_column)*2 +1] = 0x0f;
  scr_column++;
  if (scr_column==80) { scr_column=0; scr_line++; }
  if (scr_line==25) { clear_screen(); }
}

void reset () {
  scr_line = 0, scr_column = 0;
}

void new_line () {
  scr_column = 0, scr_line++;
  if (scr_line==25) { clear_screen(); }
}

void clear_screen () {
  scr_line = 0; scr_column = 0;
  char *video = VIDEO_VRAM;
  for (int ch=0; ch<80*25; ch++) {
    *video++ = ' ';
    *video++ = 0x0f;
  }
}
