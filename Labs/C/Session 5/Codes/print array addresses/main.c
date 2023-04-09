#include <stdio.h>
int main()
{
    int x,y;
    int arr[4]={0};
    x=arr[0];
    y=arr[1];
    printf("address of arr[0]=%p\n",arr);
    printf("address of arr[1]=%p\n",arr+1);
    printf("address of arr[2]=%p\n",arr+2);
    printf("address of arr[3]=%p\n",arr+3);
    printf("address of y=%p\n",&y);
    printf("address of x=%p\n",&x);
    printf("address of arr[0]=%p\n",&arr[0]);
    printf("address of arr[1]=%p\n",&arr[1]);
    printf("address of arr[2]=%p\n",&arr[2]);
    printf("address of arr[3]=%p\n",&arr[3]);
    printf("the value of arr[0]=%i\n",arr[0]);
    printf("the value of arr[0]=%i\n",*arr);
    printf("the value of arr[1]=%i\n",arr[1]);
    printf("the value of arr[1]=%i\n",*(arr+1));
    return 0;
}
