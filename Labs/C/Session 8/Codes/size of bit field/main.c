#include <stdio.h>
#pragma pack(1)
struct name
{
    unsigned int  x:1;
    unsigned char  y:1;
    unsigned char  z:1;
    unsigned char  w:1;
    unsigned char  e:1;
    unsigned char  f:1;
    unsigned char  s:1;
}ahmed;
int main()
{

printf("%i",sizeof(ahmed));
    return 0;
}
