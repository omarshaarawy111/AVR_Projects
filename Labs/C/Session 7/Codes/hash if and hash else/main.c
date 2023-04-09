#include <stdio.h>
#define X 5
int main()
{
    #if (X==5)
    printf("ok");
    #else
    printf("NOT ok");
    #endif
    return 0;
}
