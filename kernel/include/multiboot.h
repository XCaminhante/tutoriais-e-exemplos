#define MULTIBOOT_HEADER_MAGIC      0x1BADB002
#define MULTIBOOT_HEADER_FLAGS      0x00010003
#define MULTIBOOT_BOOTLOADER_MAGIC  0x2BADB002

typedef struct aout_symbol_table {
  unsigned int tabsize;
  unsigned int strsize;
  unsigned int addr;
  unsigned int reserved;
} aout_symbol_table_t;

typedef struct elf_section_header_table {
  unsigned int num;
  unsigned int size;
  unsigned int addr;
  unsigned int shndx;
} elf_section_header_table_t;

typedef struct multiboot_info {
  unsigned int flags;
  unsigned int mem_lower;
  unsigned int mem_upper;
  unsigned int boot_device;
  unsigned int cmdline;
  unsigned int mods_count;
  unsigned int mods_addr;
  union {
    aout_symbol_table_t aout_sym;
    elf_section_header_table_t elf_sec;
  } syms;
  unsigned int mmap_length;
  unsigned int mmap_addr;
  unsigned int drives_length;
  unsigned int drives_addr;
  unsigned int config_table;
  unsigned int boot_loader_name;
  unsigned int apm_table;
  unsigned int vbe_control_info;
  unsigned int vbe_mode_info;
  unsigned int vbe_mode;
  unsigned short vbe_interface_seg;
  unsigned short vbe_interface_off;
  unsigned short vbe_interface_len;
} multiboot_info_t;

typedef struct module {
  unsigned long mod_start;
  unsigned long mod_end;
  unsigned long string;
  unsigned long reserved;
} module_t;

typedef struct bios_mmap_spec {
  unsigned int size;
  unsigned int base_addr_low;
  unsigned int base_addr_hi;
  unsigned int length_low;
  unsigned int length_hi;
  unsigned int type;
} bios_mmap_spec_t;
