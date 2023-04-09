#include <stdio.h>

int main()
{
    unsigned int x,y;
    unsigned char operation;
    float result;
    printf("please enter the 2 numbers: ");
    scanf("%i%i",&x,&y);
    printf("please enter the operation: ");
    fflush(stdin);
    scanf("%c",&operation);
    if(operation=='+')
    {
       result=x+y;
        printf("result=%f",result);
    }
    else if(operation=='-')
    {
        result=x-y;
        printf("result=%f",result);
    }
    else if(operation=='*')
    {
        result=x*y;
        printf("result=%f",result);
    }
    else if(operation== '/' )
    {
        if(y!=0)
        {
        result=(float)x/y;
        printf("result=%f",result);
        }
        else
        {
            printf("can't divide by 0");
        }
    }
    else if(operation=='%')
    {
        result=x%y;
        printf("result=%f",result);
    }
    else
    {
        printf("wrong operation");
    }

    return 0;
}
