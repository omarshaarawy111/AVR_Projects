#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short  x=1026;
    unsigned short *ptr=&x;
    printf("%hu\n",*ptr);
    printf("%u\n",*(unsigned char*)ptr);
    return 0;
}
