#include <stdio.h>
int main()
{
    int i=0;
   char name[]="ahmed";
   char name_copy[10];
   while(name[i]!=0)
   {
       name_copy[i]=name[i];
       i++;
   }
   name_copy[i]=0;//   name_copy[i]='\0';
   printf("%s",name_copy);
    return 0;
}
