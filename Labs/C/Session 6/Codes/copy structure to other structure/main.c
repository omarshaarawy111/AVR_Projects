#include <stdio.h>
struct worker
{
    int id;
    double salary ;
    char name[20];
};
int main()
{
    struct worker w1,w2;
    w1.id=10;
    w1.salary=100.5;
   strcpy(w1.name,"ahmed ali");
    w2=w1;
    printf("%i\n",w2.id);
    printf("%lf\n",w2.salary);
    puts(w2.name);
    return 0;
}
