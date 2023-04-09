#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    printf("%p",ptr);//garbage address in ptr
    *ptr=1; //run time error
    return 0;
}
