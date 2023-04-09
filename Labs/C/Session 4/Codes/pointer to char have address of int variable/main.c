#include <stdio.h>
#include <stdlib.h>

int main()
{
     int number=257;
    char *ptr;
    ptr=&number;
    printf("first byte of number=%i\n",*ptr);
    ptr++;
    printf("second byte of number=%i\n",*ptr);
    return 0;
}
