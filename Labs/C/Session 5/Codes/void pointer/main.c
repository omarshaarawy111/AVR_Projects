#include <stdio.h>
int main()
{
    int x=257;
    void *ptr=&x;
    printf("%p\n",ptr);
    ptr++;
    printf("%p\n",ptr);
    printf("%i",*(char*)ptr);
    return 0;
}
