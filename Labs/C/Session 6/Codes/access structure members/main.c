#include <stdio.h>
#include"string.h"
struct worker
{
    int id;
    double salary ;
    char name[20];
};
int main()
{
    struct worker w1; // w1 is variable of struct worker
   w1.id=100;
   w1.salary=120.5;
   strcpy(w1.name,"mohamed");
   printf("id=%i\n",w1.id);
   printf("salary=%0.2f\n",w1.salary);
   printf("name=%s\n",w1.name);
    return 0;
}
