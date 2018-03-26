OUTPUT_FORMAT("binary")
ENTRY(start)
linkp = 0x00100000;

SECTIONS {
  linkt = linkp;
  .text linkp :
  {
    *(.text)
    . = ALIGN(4096);
  }
  .data . :
  {
    *(.data)
    . = ALIGN(4096);
  }
  linkd = .;
  .bss . :
  {
    *(.bss)
    . = ALIGN(4096);
  }
  linkb = .;
  _end = .;
}

