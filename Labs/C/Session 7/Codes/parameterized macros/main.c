#include <stdio.h>
#include <math.h>
#define SUM(a,b)  a+b
#define MAX(a,b)  ((a) > (b) ? (a) : (b))
int main()
{
printf("%lf\n",sqrt(4));
int z;
int x = 9 , y=7;
z=SUM(x,y);
printf("z=%i\n",z);
z = MAX(x,y)*2;
printf("z=%i\n",z);
    return 0;
}
