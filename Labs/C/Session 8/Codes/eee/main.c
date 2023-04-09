#include "stdio.h"
 /* function declaration(prototype) */
int max(int num1, int num2);
int main ()
{
    int x;

int a = 100;
 int b = 200;
int ret;

 /* calling a function to get max value */
 ret = max(a,b);
  scanf("%i",&x);
 printf( "Max value is : %d\n", ret );
 return 0;
}


/* function returning the max between two numbers */
 int max(int num1, int num2)
 {
int result;
if (num1 > num2)
{
 result = num1;
}
else
{
result = num2;
}
return result;
 }

