#include <stdio.h>
#include <stdlib.h>
int main()
{

    unsigned char x=255;
    unsigned char *ptr;
   ptr=&x;
    printf("%i",*ptr);


    return 0;
}
