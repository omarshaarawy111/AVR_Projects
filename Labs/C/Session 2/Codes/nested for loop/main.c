#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char counter1,counter2;
    for(counter1=1;counter1<=3;counter1++)
    {
        for(counter2=1;counter2<=5;counter2++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
