#include <iostream>
#include <cmath>
using namespace std;

// 求一元二次方程ax²＋bx＋c＝0的根，结果保留2位小数
int main()
{
  double a,b,c,deta;
  double x1,x2;
  scanf("%lf %lf %lf",&a,&b,&c);
  deta = b*b - 4*a*c;
  // 求根公式的特殊情况
  if(a == 0){
    if(b == 0 && c != 0){
      printf("Not An Equation");
    }
    else if(b==0 && c==0){
      printf("Zero Equation");
    }
    else if(b != 0 && c != 0){
      printf("%.2lf",(-c)/b);
    }
    else{
      printf("%.2lf",0);
    }
  }
  // 正常判断
  else{
    if(deta > 0){
      x1=(-b+sqrt(b*b-4*a*c))/(2*a);
      x2=(-b-sqrt(b*b-4*a*c))/(2*a);
      printf("%.2lf\n",x1);
      printf("%.2lf\n",x2);
    }
    else if(deta < 0){

      if(-b/(2*a)!=0){
          printf("%0.2f+%0.2fi\n",-b/(2*a)*1.0,1.0*(sqrt(-deta)/(2.0*a)));
          printf("%0.2f-%0.2fi\n",-b/(2*a)*1.0,1.0*(sqrt(-deta)/(2.0*a)));
        }
       else{
         printf("0.00+%.2fi\n",1.0*(sqrt(-deta)/(2.0*a)));
         printf("0.00-%.2fi\n",1.0*(sqrt(-deta)/(2.0*a)));
        }
    }
    else{
       printf("%.2lf",(-b)/(2*a));
    }
  }
  return 0;
}
