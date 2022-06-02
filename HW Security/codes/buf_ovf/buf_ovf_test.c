#include <stdio.h>
 void callfunc()
    {
          int buf[3];
          int *ret;
          ret = buf + 5;
         *ret = *ret + 7;
    }
    void main( )
    {
          int b;
          b = 0;
          callfunc();
          b = 1;
          printf("%d\n", b);
    } 
