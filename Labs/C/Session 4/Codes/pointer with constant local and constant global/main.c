#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int x=5;
    int *ptr=&x;
    *ptr=70;
    printf("x=%i",x);
    return 0;
}
