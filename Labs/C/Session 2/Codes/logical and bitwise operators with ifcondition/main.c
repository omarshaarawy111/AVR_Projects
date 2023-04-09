#include <stdio.h>
int main()
{
    unsigned char x=128,y=127;
    if(x && y)
    {
        printf("ok\n");
    }
    if(x & y)
    {
      printf("not ok\n");
    }
    return 0;
}
