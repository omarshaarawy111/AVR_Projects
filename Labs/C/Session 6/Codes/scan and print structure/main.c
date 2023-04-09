#include <stdio.h>
struct worker
{
    int id;
    double salary ;
    char name[20];
};
int main()
{
   struct worker w1;
  scanf("%i",&(w1.id));
  scanf("%lf",&(w1.salary));
  fflush(stdin);
  gets(w1.name);
  printf("id=%i\n",w1.id);
  printf("salary=%0.1lf\n",w1.salary);
  printf("name=");
  puts(w1.name);
    return 0;
}
