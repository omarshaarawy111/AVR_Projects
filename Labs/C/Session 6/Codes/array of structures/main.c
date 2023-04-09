#include <stdio.h>
struct worker
{
    int id;
    double salary ;
};

int main()
{
    int i;
    struct worker arr[3]={{5,10.5},{6,11.5},{7,12.5}}; // array of 3 structures
    for(i=0;i<=2;i++)
    {
        printf("%i\n",arr[i].id);
        printf("%lf\n",arr[i].salary);
    }
    return 0;
}
