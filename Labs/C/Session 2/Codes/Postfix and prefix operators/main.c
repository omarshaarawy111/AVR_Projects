#include <stdio.h>

int main()
{
    unsigned char x=5,y=6,z=7,w;
    w=x++ + y++ + --z ;
    printf("w=%i\n",w);
    printf("x=%i\n",x);
    printf("y=%i\n",y);
    printf("z=%i\n",z);
    return 0;
}
