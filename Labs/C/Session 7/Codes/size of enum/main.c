#include <stdio.h>
enum State {Working = 1, Failed = 0, Freezed = 0};

int main()
{
   enum State d;
   printf("%d",sizeof(d));
   return 0;
}
