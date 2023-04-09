#include <stdio.h>

int main () {

   char grade = 'C';

   switch(grade) {
      case 'A' :
         printf("Excellent!\n" );
      case 'B' :
      case 'C' :
         printf("Well done\n" );
      case 'D' :
         printf("You passed\n" );
      case 'F' :
         printf("Better try again\n" );


      default :
         printf("Invalid grade\n" );
   }

   printf("Your grade is  %c\n", grade );

   return 0;
}
