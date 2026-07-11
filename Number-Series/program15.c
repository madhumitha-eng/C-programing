#include<stdio.h>
int main()
{
  int s1,s2,s3,s4,s5;
float percentage;
scanf("%d%d%d%d%d,s1,s2,s3,s4,s5");
percentage=((s1+s2+s3+s4+s5)/500)*100;
if(percentage>=90)
  printf("Grade A");
else if(percentage<90&&percentage>=80)
  printf("Grade B");
else if(percentage<80&&percentage>=70)
  printf("Grade C");
else if(percentage<70&&percentage>=60)
  printf("Grade D");
else if(percentage<60&&percentage>=50)
  printf("Grade E");
else
  printf("Fail")
    return 0;
}
