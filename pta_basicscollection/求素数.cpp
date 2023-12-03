#include <iostream>

using namespace std;
// 求n以内最大的k个素数以及它们的和
#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int sum=0,sum2=0,x;
    int i,b=0,j;
    for(i=m;i>1;i--)
    {
        for( j=2;j<i/2;j++)
        {
            x=i%j;//i对j从2开始取余
            sum=sum+x;
            if(x==0)//证明不是素数就可以跳出这个for循环
            {  
                sum=0;
                break;
            }
                      
        }
        if(sum!=0)//如果是素数就进入这个if语句
        {
            b++;//记已经加了几个素数
            sum2=sum2+i;//求素数的和
            if(b==n||i==2 )
            {
              break;
            }
            printf("%d+",i);
        }
    }
    printf("%d=%d",i,sum2);
    return 0;
}