#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x=10,y=20,z,w;
    z=y>x?5:10; // if y>x then put z=5 else put z=10
    w=x>y?5:10;  // if x>y then put w=5 else put w=10
    printf("z=%i\n",z);
    printf("w=%i\n",w);
    return 0;
}
