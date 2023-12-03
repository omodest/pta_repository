#include <iostream>
#include <cmath>
// 例如 630 可以分解为 3×5×6×7，其中 5、6、7 就是 3 个连续的数字
using namespace std;
int main()
{
  int n = 0;
  scanf("%d", &n);
  int i = 0,j=0, a = 0, sum=0,num = 0,temp=0,qidian=0,longqidian=0;
  
  for (i = 2;i <= sqrt(n);i++)
  {
    num = 0;
    sum = n;
    qidian = i;
    // 这种方式用来求连续因子,随着i逐渐变大，因子只会越来越短
    for (j = i;sum%j==0&&sum!=0;j++) 
    {
      sum /= j;
      num++; 
    }
    // temp记录的就是最长因子长度
    if (num > temp) 
    {
      temp = num;
      longqidian = qidian;
    }
  }
  if (temp == 0)
    printf("1\n%d", n);
  else
  {
    printf("%d\n", temp);
    i = longqidian;
    // 从起点开始连续遍历temp次
    while (i < longqidian + temp)
    {
      if (i != longqidian)
        printf("*");
      printf("%d", i);
      i++;
    }
  }
  return 0;
}