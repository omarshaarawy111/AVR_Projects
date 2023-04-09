#include <stdio.h>
#include <stdlib.h>
struct student
  {
      int x;
      char y;
      double z;
  }e;
int main()
{

  //e.x=10;
  printf("%i\n",e.x);
  struct student e2;

  e2.x=100;
  printf("%i\n",e2.x);
    return 0;
}
