#include<stdio.h>
int main()
{
  int pin,balance,amount;
  printf("Enter the PIN:");
  scanf("%d",&pin);
  printf("Enter the balance:");
  scanf("%d",&balance:");
  printf("Enter the amount:");
  scanf("%d",&amount);
  if(pin==1234)
  {
    if(balance>=amount)
    {
      if(amount<=25000)
    printf("Transaction Successful");
    else
    printf("Daily Limit Exceeded");
  }
  else
      printf("Insufficient Balance");
  }
  else
    printf("Invalid PIN");

  return 0;
}
