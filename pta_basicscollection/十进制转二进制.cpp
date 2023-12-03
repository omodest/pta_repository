#include <stdio.h>
int main()
{
  int a,f,e,b[100],d,c;
  while(scanf("%d",&a) != EOF)  // 用法: scanf("%d",a) != EOF
  {
    // 备份一个a,用来处理特殊情况
    f=a;
    // 让a不断对2求余,直到a等于0
    for(e=0;a>0;e++){
      b[e]=a%2;
      a=a/2;
    }
    // 特殊情况
    if(f == 0)
    {
      printf("0");
    }
    // 逆序输出
    else
    {
      for(d=e-1;d>=0;d--){
        printf("%d",b[d]);
      }
    }
    printf("\n");
    }
 }