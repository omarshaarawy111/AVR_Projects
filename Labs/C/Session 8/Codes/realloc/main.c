#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n1,n2,*ptr1,*ptr2,sum=0;
    printf("enter number of elements:\n");
    scanf("%i",&n1);
    ptr1=(int *)malloc(n1*sizeof(int));
    if(ptr1==0)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("enter array elements:\n");
        for(i=0;i<=n1-1;i++)
        {
            scanf("%i",ptr1+i);
            sum=sum+*(ptr1+i);
        }
        printf("enter the new size :\n");
        scanf("%i",&n2);
        ptr2=(int *)realloc(ptr1,n2*sizeof(int));
        printf("the elements of new array:\n");
        for(i=0;i<=n2-1;i++)
        {
          printf("%i\n",*(ptr2+i));
        }
        printf("sum=%i",sum);
        free(ptr2);
    }
    return 0;
}
