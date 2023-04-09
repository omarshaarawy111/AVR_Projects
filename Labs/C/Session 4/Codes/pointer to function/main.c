#include <stdio.h>
#include <stdlib.h>
int sum(int x,int y);
int main()
{
    int result;
    int (*ptr)(int,int);
    ptr=sum;
    result=ptr(10,20);
    printf("sum=%i",result);
    return 0;
}
int sum(int x,int y)
{
    return(x+y);
}
