#include <stdio.h>
#include <stdlib.h>
#define PIN
int main()
{
    #if defined PORT
    #error 5aly balk feh error
    #elif defined PIN
    #warning 5aly balk feh warning
    #endif

    return 0;
}
