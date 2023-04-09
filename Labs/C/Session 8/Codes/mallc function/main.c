#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,*ptr,sum=0;
    printf("enter number of elements:");
    scanf("%i",&n);
    ptr=(int *)malloc(n*sizeof(int));
    if(ptr==0)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("enter array elements:");
        for(i=0;i<=n-1;i++)
        {
            scanf("%i",ptr+i);
            sum=sum+*(ptr+i);
        }
        printf("sum=%i",sum);
        free(ptr);
    }
    return 0;
}
