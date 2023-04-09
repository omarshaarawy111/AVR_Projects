#include <stdio.h>
#include <stdlib.h>
#include "factorial.h"
int main()
{
     int num;
    unsigned long long fact_result;
    printf("please enter the number :");
    scanf("%i",&num);
    if(num>=0)
    {
    fact_result=fact(num);
    printf("the factorial =%llu\n",fact_result);
    }
    else
    {
    printf("please enter positive number");
    }
    return 0;
}
