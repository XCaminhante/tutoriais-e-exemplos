#include <stdio.h>
#define byte unsigned int
#define NR 11

byte al,ah,x,y,k,found;
//Values array
byte set[NR]={0x01,0x03,0x25,0x39,0xB3,0x78,0xC4,0x6B,0xA6,0x12,0xF0};
//Results array : 0 for set_A, 1 for set_B
byte res[NR]={1,   1,   0,   1,   0,   1,   0,   0,   1,   1,   1};
//P flag array
byte p[NR]  ={0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0};
//S flag array
byte s[NR]  ={0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0};

int main () {
   for (x=1; x<256; x++) {
      for (y=0; y<256; y++) {
         for (k=0; k<NR; k++) {
            p[k]=0;
            al = set[k] % x;
            ah = set[k] / x;
            al = (al+ah*y)%256;
            ah = 0;
            if (al<0x80) s[k]=0; else s[k]=1;
            while (al) { p[k]+=al%2; al>>=1; }
            p[k]%=2;
         }
         found=1;
         for (k=1; k<NR; k++) {
            #ifdef DEBUG
            printf("%d %d ", (p[k]^res[k]), (p[0]^res[0]));
            #endif
            if ((p[k]^res[k])!=(p[0]^res[0])) {found=0; break;}
         }
         #ifdef DEBUG
         puts ("");
         #endif
         if (found) {
            printf ("X=%d Y=%d ",x,y);
            if (p[0]^res[0]) printf ("using JNP\n");
            else printf ("using JP\n");
         }
         //
         found=1;
         for (k=1; k<NR; k++) {
            #ifdef DEBUG
            printf("%d %d ", (s[k]^res[k]), (s[0]^res[0]));
            #endif
            if ((s[k]^res[k])!=(s[0]^res[0])) {found=0; break;}
         }
         #ifdef DEBUG
         puts ("");
         #endif
         if (found) {
            printf ("X=%d Y=%d ",x,y);
            if (s[0]^res[0]) printf ("using JNS\n");
            else printf ("using JS\n");
         }
      }
   }
   return 0;
}
