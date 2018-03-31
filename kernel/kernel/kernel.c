#include <stdio.h>
#include <multiboot.h>

unsigned term_color;

int main (unsigned long magic, unsigned long mboot_struct) {
  term_color = DEFAULT_TERM;
  multiboot_info_t *mbi = (multiboot_info_t*)mboot_struct;
  if (magic!=MULTIBOOT_BOOTLOADER_MAGIC) {
    print("FUCK, invalid magic number...");
    return 0xBADC0DE;
  }
  term_color = WHITE;
  print("Hello, i'm your kernel ");
  term_color = LIGHT_RED;
  print("AND I AM FUCKING ALIVE!\n");
  term_color = LIGHT_CYAN;
  print("Now with colors! ");
  term_color = LIGHT_GREEN;
  print("A W E S O M E\n");
  term_color = DEFAULT_TERM;
  print("Bootloader: ");
  print((char*)mbi->boot_loader_name); //Display GRUB/Syslinux/our bootloader version
}

static unsigned scr_line, scr_column;

void print (const char *str){
  while (*str)
    putchar(*str++);
}

#define NEWLINE \
  { scr_column=0, scr_line++; \
  if (scr_line==LINES) { scr_line=0; } }

void putchar (char ch) {
  if (ch == 10) {
    NEWLINE;
    return;
  }
  VIDEO_VRAM[(scr_line*COLUMNS + scr_column)*2] = ch;
  VIDEO_VRAM[(scr_line*COLUMNS + scr_column)*2 +1] = term_color;
  scr_column++;
  if (scr_column==COLUMNS) { NEWLINE; }
}

void reset () {
  scr_line = 0, scr_column = 0; term_color = DEFAULT_TERM;
}

void clear_screen () {
  scr_line = 0; scr_column = 0;
  char *video = VIDEO_VRAM;
  for (int ch=0; ch<COLUMNS*LINES; ch++) {
    *video++ = ' ';
    *video++ = term_color;
  }
}
