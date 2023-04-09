#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char counter=0,sum=0;
    while(counter<=5)
    {
        sum=sum+counter;
        counter++;
    }
    printf("sum=%i",sum);
    return 0;
}
