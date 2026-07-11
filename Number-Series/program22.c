#include<stdio.h>
int main()
{
  int mark,income,attendance;
  printf("Enter the mark:");
  scanf("%d",&mark);
  printf("Enter the Family income");
  scanf("%d",&income);
  printf("Enter the attendance percentage:");
  scanf("%d",&attendance);
  if(mark>=80)
  {
    if(income<200000)
    {
      if(attendence>=75)
        printf("Scholarship Approved");
      else
        printf("Attendance Not Eligible");
    }
    else
          printf("Income Not Eligible");
  }
  else
    printf("Marks Not Eligible");
  return 0
    }
