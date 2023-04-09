#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned char counter,sum=0;

   for(counter=0;counter<=10;counter=counter+2)
   {
       sum=sum+counter;
   }
   printf("sum=%i",sum);
    return 0;
}
