#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int i,j,k,a,b,sum=0,flag=0;
  scanf("%d %d",&a,&b);
  for(i = a; i <= b; i++){
    sum = 0;
    // 求这个数所有的因数
    for(j = 1; j < i; j++){
      if(i % j == 0){
         sum = sum + j;
      }
    }
    // 判断是否是完数
     if(sum != i){
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