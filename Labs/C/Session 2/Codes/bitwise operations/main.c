#include <stdio.h>

int main()
{
    unsigned char x=1;
    x|=(1<<7); // set bit number 7
    printf("x=%i\n",x);
    x&=~(1<<7); // clear bit number 7
    printf("x=%i\n",x);
    x^=(1<<7); // toggle bit number 7
    printf("x=%i\n",x);
    printf("the 7's bit=%i",(x&(1<<7)>>7)); //read the 7's bit from number and then print it
    return 0;
}
