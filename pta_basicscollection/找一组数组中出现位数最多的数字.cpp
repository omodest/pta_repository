#include <iostream>

int main(){
  int i,count,num,max,total=0;
  // 定义一个长度10，每个索引初始值都为0. 
  // 思路：使用哈希表
  int arr[10] = {0}; 
  scanf("%d",&count);
  // 从各位开始依次遍历每个数的各位
  for(i = 0; i < count; i++){
    scanf("%d",&num);
    if(num == 0){
      arr[0]++;
      continue;
    }
    for(;num > 0;){
      arr[num%10]++;
      num /= 10;
    }
  }

  // 找数组最大值
  max = arr[0];
  for(i = 1; i < 10;i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  printf("%d:",max);
  // 找索引
  for(i = 0; i < 10; i++){
    if(arr[i] == max){
      printf(" %d",i);
    }  
  }

  
  return 0;
}