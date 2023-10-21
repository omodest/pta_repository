#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  // sum如果给初值0，将内层循环j的初始值改为1,为什么会有问题
  int i,j,k,a,b,sum=1,flag=0;
  scanf("%d %d",&a,&b);
  for(i = a; i <= b; i++){
    // 求这个数所有的因数
    for(j = 2; j < i; j++){
      if(i % j == 0){
         sum = sum + j;
      }
    }
    // 判断是否是完数
     if(sum != i){
       sum = 1;
       continue;
     }
     flag = 1;
     printf("%d = 1",i); // 输出前一部分
  	 for(k=2;k<j;k++)//重复操作
  	 {			
       if(i%k==0)
  		 {
  				printf(" + %d",k);
  			}
  		}
  		printf("\n");//换行  否则有两个及两个以上的完数会一行输出
  }
  if(flag==0){
    printf("None");
  }
  
    return 0;
}