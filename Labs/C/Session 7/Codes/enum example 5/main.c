#include <stdio.h>
enum State {Working = 1, Failed = 0, Freezed =5 };

int main()
{
   enum State d;
   printf("%d %d %d",Working,Failed,Freezed);
   return 0;
}
