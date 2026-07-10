#include<stdio.h>
int main(){
  int pin;
  scnf("%d",&pin);
  if(pin==1234)
    printf("Access Granted");
  else
    printf("No Access");
  return 0;
}
