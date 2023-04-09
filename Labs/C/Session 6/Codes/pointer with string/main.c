#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* ptr;
    ptr="hello world";
    printf("%c",*(ptr+3));
    return 0;
}
