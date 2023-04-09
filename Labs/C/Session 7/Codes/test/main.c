#include <stdio.h>
int sum(short x, short y);


int main()
{
    long w=sum(5,6);

printf("%i",w);
    return 0;
}
int sum(short x, short y)
{
	register int z;
	z = x + y;
	return z;
}
