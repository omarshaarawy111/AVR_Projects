#include <stdio.h>
//#define X
//#define Y
int main()
{
#if defined X
printf("aa");
#elif defined Y
printf("bb");
#else
printf("dd");
#endif
return 0;
}
