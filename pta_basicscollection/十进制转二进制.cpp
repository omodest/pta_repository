#include <stdio.h>
int main()
{
  int a,f,e,b[100],d,c;
  while(scanf("%d",&a)!=EOF)
  {
    f=a;
    for(e=0;a>0;e++){
      b[e]=a%2;
      a=a/2;
    }
    if(f==0)
    {
      printf("0");
    }
    else
    {
      for(d=e-1;d>=0;d--){
        printf("%d",b[d]);
      }
    }
    printf("\n");
    }
 }