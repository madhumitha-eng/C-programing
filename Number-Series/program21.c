#include<stdio.h>
int main()
{
  int salary,age,score;
printf("enter age:");
scanf("%d",&age);
printf("Enter salary:);
  scanf("%d",&salary);
printf("enter SIBIL score:);
  scanf("%d",&score);
if(age>=21)
{
if(salary>=30000)
{
if(score>=170)
  printf("Loan Approved");
else 
  printf("Loan Rejected");
}
else
  printf("Salary Not Eligible");
}
else
printf("Ag not Eligible");
return 0;
}

