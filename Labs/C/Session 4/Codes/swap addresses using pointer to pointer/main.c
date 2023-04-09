#include <stdio.h>
#include <stdlib.h>
#include"swap.h"
int main()
{
    int x=100,y=200;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    printf("the addresses before swap:\nptr1=%p\nptr2=%p\n",ptr1,ptr2);
    swap(&ptr1,&ptr2);
    printf("the addresses after swap:\nptr1=%p\nptr2=%p\n",ptr1,ptr2);
    return 0;
}
