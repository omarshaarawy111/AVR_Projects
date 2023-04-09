#include <stdio.h>
#include <stdlib.h>
#include"sum.h"
int main()
{
    int arr1[3]={1,2,3};
    int arr2[3]={2,3,4};
    int arr3[3];

    sum_2arr(arr1,arr2,arr3,(sizeof(arr1)/sizeof(int)));//   sum_2arr(arr1,arr2,arr3,3)
    print_arr(arr3,(sizeof(arr3)/sizeof(int))); //   print_arr(arr3,3)
    return 0;
}
