#include<stdio.h>
int main()
{
  int salary;
  scan("%d",&salary);
  if(salary>50000)
    printf("Bonus Eligible");
  else
    printf("Not bonus eligible");
  return 0;
}
