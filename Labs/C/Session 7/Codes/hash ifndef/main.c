#include <stdio.h>
#define PRINT_OK
int main()
{
    #ifndef PRINT_OK
    printf("ok");
    #else
    printf("Not ok");
    #endif
    return 0;
}
