#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a ; // 1 byte
   short b ; // 2byte
   int c ; //4 byte
   long d ; //4 byte
   long long e; //8 byte
   float f; //4 byte
   double g ; //8 byte
   long double h ; //12 byte
   printf("size of char=%i\n",sizeof(a));
   printf("size of short=%i\n",sizeof(b));
   printf("size of int=%i\n",sizeof(c));
   printf("size of long=%i\n",sizeof(d));
   printf("size of long long =%i\n",sizeof(e));
   printf("size of float=%i\n",sizeof(f));
   printf("size of double=%i\n",sizeof(g));
   printf("size of long double=%i\n",sizeof(h));

    return 0;
}
