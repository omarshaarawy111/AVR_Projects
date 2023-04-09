#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=255;
    int *ptr=&x;
    printf("%p\n",ptr);
    printf("%p\n",&x);
    printf("%i\n",x);
    *ptr++;
    printf("%p\n",ptr);
    printf("%p\n",&x);
    printf("%i\n",x);
     printf("%i\n",*ptr);
    ptr=&x;
     ++(*ptr);
     printf("The value of ptr is : %p\n", ptr );
    printf("%p\n",ptr);
    printf("%p\n",&x);
    printf("%i\n",x);
    return 0;
}
