#include<stdio.h>
int main()
{
  int item,total,discount;
  scanf("%d",&item);
  total=item*250;
  if(total>5000)
    discount=total*0.15;
  printf("total bill= %d",discount);
  else
  printf("total bill= %d",total);
  return 0;
}
