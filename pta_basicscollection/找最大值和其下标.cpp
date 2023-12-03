#include <iostream>

using namespace std;

int main()
{
  int i,j,a,b;
  bool flag = false;
  scanf("%d",&a);
  int arr[a],k = 0,max = 0;
  // 初始化
  for(i = 0; i < a; i++){
    scanf("%d ",&b);
    arr[i] = b;
  }
  // 双指针比较
  for(i = a-1;i >= 0; i--){ // 右指针
    for(j = k; j < i; j++){ // 左指针
      // 如果左指针数大，内层循环j修改为这个最大值索引k
      // 因为索引小于k所对应的值，一定会小于k索引对应的值
      if(arr[j] >= arr[i]){
        flag = true;
        k = j;
        max = arr[j];
        break; // 直接进行下一个外层循环
      }
    }
    // 如果这一轮循环，没有数比索引i对应的的值大
    // 那么此时的i就是整个数组最大值
    if(flag == false){
        k = i;
        max = arr[i];
        break;
    }
  }
  printf("%d %d",max,k);
  return 0;
}