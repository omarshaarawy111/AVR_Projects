#include <stdio.h>
struct worker
{
    int id;
    double salary ;
  //  char name[20];
};
int main()
{
   struct worker w1; //initialization of structure
    printf("id=%i\n",w1.id);
    printf("salary=%lf\n",w1.salary);
   // printf("name=");
  //  puts(w1.name);
    return 0;
}
