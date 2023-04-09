#include <stdio.h>
#include <stdlib.h>

void print(void);
int main()
{

    print();
    print();
    print();
    return 0;
}
void print(void)
{
  static int x=0;
    printf("x=%i\n",x);
    x++;
}
