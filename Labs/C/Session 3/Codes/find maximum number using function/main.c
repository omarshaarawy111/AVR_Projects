#include <stdio.h>
int max(int x,int y);
 /* function declaration(prototype) */
int main ()
{
int a = 100;
 int b = 200;
int ret;
 ret = max(a,b);
printf( "Max value is : %d\n", ret );
return 0;
}
int max(int x,int y)
{
    int result;
    if(x>y)
    {
        result=x;
    }
    else
    {
        result=y;
    }
    return result;
}
/* function returning the max between two numbers */


