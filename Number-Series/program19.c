#include<stdio.h>
int main(){
  int amount,total;
  float intrest=0.07;
  printf("Deposit amount:");
  scanf("%d",&amount);
  total=amount+intrest;
  if(total>100000)
    printf("Total amount=%d",total);
  printf("Premium Customer");
  else
  printf("Total amount=%d",total);
  return 0;
}
