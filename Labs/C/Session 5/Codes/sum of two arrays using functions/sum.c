#include<stdio.h>
void sum_2arr(int *array1,int *array2,int *array3,int size) //void sum_2arr(int array1[],int array2[],int array3[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        array3[i]=array1[i]+array2[i];
    }
}

void print_arr(int *arr,int size) //print_arr(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%i\n",arr[i]);
    }
}
