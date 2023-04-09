#include <stdio.h>
#include "max.h"
int main ()
{
int a = 100;
 int b = 200;
int ret;

 /* calling, a function to get max value */
 ret = max(a, b);
 printf( "Max value is : %d\n", ret );
 return 0;
}
