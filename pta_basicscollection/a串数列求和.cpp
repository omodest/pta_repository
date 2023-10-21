#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int i,a, n,s=0;
  scanf("%d %d",&a,&n);
  // 备份一个a值
  int remark = a;
  for(i = 0;i < n; i++){
    s += a;
    // 第n个a = 第n-1个a * 10 + a(初始化的a)
    a *= 10;
    a += remark;
  }
  printf("s = %d",s);
  return 0;
}