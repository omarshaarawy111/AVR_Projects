#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x;
    x=128;
    x= (x<<3)|(x>>5); //rotate left by 3 bits
    printf("x=%i\n",x);
    x=128;
    x=(x>>3)|(x<<5); //rotate right by 3 bits
    printf("x=%i\n",x);
    return 0;
}
