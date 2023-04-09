#include <stdio.h>
#define X 5
#undef X
#define X 6
int main()
{

    printf("x=%i",X);
    return 0;
}
