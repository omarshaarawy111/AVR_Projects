#include <stdio.h>
struct worker
{
    int id;
    double salary ;
};
struct worker add_value_to_structure(struct worker x);

int main()
{
   struct worker d={10,100.5};
   struct worker z;
   z=add_value_to_structure(d);
   printf("%i\n",z.id);
   printf("%lf\n",z.salary);
    return 0;
}
struct worker add_value_to_structure(struct worker x)
{
    struct worker w;
    w.id=x.id+5;
    w.salary=x.salary+10;
    return w;
}

