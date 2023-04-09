#include <stdio.h>
void inc(int x);
int main()
{
    int x=5;
    inc(x);
     printf("x=%i\n",x);
    return 0;
}

void inc(int x)
{
  return x++;
    printf("x=%i\n",x);

}
