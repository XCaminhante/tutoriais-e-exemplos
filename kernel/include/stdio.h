void print (const char *str);
void putchar (char ch);
void reset ();
void new_line ();
void clear_screen ();

#define VIDEO_VRAM ((char*)0xb8000)
#define LINES 25
#define COLUMNS 80

enum term_colors {
  BLACK,
  BLUE,
  GREEN,
  CYAN,
  RED,
  MAGENTA,
  BROWN,
  LIGHT_GRAY,
  GRAY,
  LIGHT_BLUE,
  LIGHT_GREEN,
  LIGHT_CYAN,
  LIGHT_RED,
  LIGHT_MAGENTA,
  LIGHT_BROWN,
  WHITE
};

#define BG_COLOR(x) (x*16)
#define DEFAULT_TERM (LIGHT_GRAY+BG_COLOR(BLACK))
