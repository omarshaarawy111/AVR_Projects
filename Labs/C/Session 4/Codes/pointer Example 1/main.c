#include <stdio.h>

int main () {

  unsigned int  var = 20;   /*  variable declaration and initialization */
   unsigned int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/

   printf("Address of var variable: %p\n", &var  );

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %p\n", ip );

   /* access the value using the pointer */
   printf("Value of *ip variable: %u\n", *ip );

   return 0;
}
