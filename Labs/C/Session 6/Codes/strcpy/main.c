#include <stdio.h>
#include<string.h>
int main()
{
  char name[10];

  char name_copy[10];
  gets(name);
  strcpy(name_copy,name);
  puts(name_copy);
    return 0;
}
