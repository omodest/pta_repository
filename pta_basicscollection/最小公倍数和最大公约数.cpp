#include <iostream>

using namespace std;

int main()
{
  int M, N;
  scanf("%d %d",&M,&N);

  int sum = M * N;
  int temp = 0;
  while(N % M != 0){ // 辗转相除法
    temp = M;
    M = N % M;
    N = temp;
  }
  printf("%d %d",M,sum/M); // M为最大公约束，sum/M为最小公倍数
  
  return 0;
}