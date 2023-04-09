#include <stdio.h>
#include <stdlib.h>
#include"fib.h"

int main()
{
  int number ;
  int fib_result;
  printf("please enter number :");
  scanf("%i",&number);
  if (number<0)
  {
      printf("the number must be positive ");
  }
  else
  {
  fib_result=fib(number);
  printf("the fibonacci result =%i ",fib_result);
  }
    return 0;
}

