#include <iostream>

using namespace std;

int main()
{
  // 方法1 双指针 i,j 交换
  int i,j=0,a,b; 
  scanf("%d\n",&a);
  int arr[a];
  // 初始化
  for(i = 0; i < a; i++){
    scanf("%d ",&b);
    arr[i] = b;
  }
  // 方法2 ：逆序数组
  int temp;
  for(i = a-1; i > (a/2)-1; i--){
    for(; j < i;){
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      j++;
      break;
    }
  }
  for(i = 0; i <= a - 1; i++){
    if(i == a - 1){
      printf("%d",arr[i]);
      return 0;
    }
    printf("%d ",arr[i]);
  }
  
  return 0;
}