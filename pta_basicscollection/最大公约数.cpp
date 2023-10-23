#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  long long i,num1,num2,temp1,temp2,temp3,temp4,max;
  scanf("%lld %lld",&num1,&num2);
  temp1 = llabs(num1);
  temp2 = llabs(num2);
  if(num1 == 0 && num2 == 0) 
    printf("1");
  else if(num1 == 0 || num2 == 0) 
    num1 == 0 ? printf("%lld",temp2) : printf("%lld",temp1);
  else{

    while (temp1 % temp2 != 0) {//直到余数为0结束循环
        temp4 = temp1;//把temp1赋值给temp4
        temp3 = temp2;//把temp2赋值给temp3
        temp2 = temp4 % temp2;//相除取余数
        temp1 = temp3;

    }
    max = temp2;//最大公约数
    printf("%lld", max);//输出
  }
  return 0;
}