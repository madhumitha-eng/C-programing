#include<stdio.h>
int main()
{
  int year;
  if((year%400==0)||(year%4==0&&year%100!=0)
    printf("Leap year");
  else
    printf(Not leap year);
  return 0;
}
