#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr=(int*)calloc(6,4);
    printf("%i",*ptr);
    return 0;
}
