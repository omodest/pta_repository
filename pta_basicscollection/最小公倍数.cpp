#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  long long num1,num2,temp1,temp2,temp3,temp4,max,num3=0;
  scanf("%lld %lld",&num1,&num2);
  num1 = llabs(num1);
  num2 = llabs(num2);
  temp1 = num1;
  temp2 = num2;
  if(num1 == 0 || num2 == 0) 
    printf("0");
  else{
    while (temp1 % temp2 != 0) {
        temp4 = temp1;
        temp3 = temp2;
        temp2 = temp4 % temp2;
        temp1 = temp3;
    }
    max = temp2;
    num3 = num1/max;
    printf("%lld",num3*num2);
  }
  return 0;
}