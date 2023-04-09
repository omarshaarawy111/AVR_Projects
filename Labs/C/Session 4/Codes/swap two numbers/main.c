#include <stdio.h>
#include <stdlib.h>
#include"swap.h"
int main()
{
    int x=100,y=200;
    printf("the numbers before swap:\nx=%i\ny=%i\n",x,y);
    swap(&x,&y);
    printf("the numbers after swap:\nx=%i\ny=%i\n",x,y);
    return 0;
}
