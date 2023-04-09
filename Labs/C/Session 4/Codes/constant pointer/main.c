#include <stdio.h>
#include <stdlib.h>
int main()
{
int *const ptr=&x;
(*ptr)++;
printf("x=%i",x);
    return 0;
}
