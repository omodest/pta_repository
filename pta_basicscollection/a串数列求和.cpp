#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int i,a, n,s=0;
  scanf("%d %d",&a,&n); // a + aa + aaa + ... aaaa(n个a)
  // 备份一个a值
  int remark = a;
  for(i = 0;i < n; i++){
    s += a; // s用来求和
    a *= 10; // a乘10，加上最初的a
    a += remark;
  }
  printf("s = %d",s);
  return 0;
}