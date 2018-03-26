int main (unsigned long magic, unsigned long mboot_struct);
void print (const char *str);
void reset ();
void new_line ();
void clear_screen ();

#define VIDEO_VRAM ((char*)0xb8000)
