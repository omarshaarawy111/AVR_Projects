#include <stdio.h>
#include <stdlib.h>

void print_address();
int main()
{

print_address();

    return 0;
}

void print_address()
{
    int num3=255;
    int num4;
    int num5;
    int num6;
    int num7;
    printf("address of num3:%p\n",&num3);
    printf("address of num4:%p\n",&num4);
    printf("address of num5:%p\n",&num5);
    printf("address of num6:%p\n",&num6);
    printf("address of num7:%p\n",&num7);
}
