#include <stdio.h>
struct student
{
    int x;
    int y;
    int z;
    double e;
    float w;
     char f;
};
int main()
{
    struct student d ;
    printf("%p\t%i\n",&(d.x),&(d.x));
    printf("%p\t%i\n",&(d.y),&(d.y));
    printf("%p\t%i\n",&(d.z),&(d.z));
    printf("%p\t%i\n",&(d.e),&(d.e));
    printf("%p\t%i\n",&(d.w),&(d.w));
    printf("%p\t%i\n",&(d.f),&(d.f));
    printf("%i",sizeof(d));
    return 0;
}
