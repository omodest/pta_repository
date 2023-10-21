#include <iostream>

using namespace std;

int main()
{
  // 将要插入的元素放到数组结尾，然后往前冒泡
  int i,count,num,addnum,temp;
  scanf("%d",&count);
  count++;
  int arr[count];
  for(i = 0; i < count-1; i++){
    scanf("%d",&num);
    arr[i] = num;
  }
  scanf("%d",&addnum);
  // 将要插入的数放到最后
  arr[count-1] = addnum;
  for(i = count - 1; i > 0;i--){
    if(arr[i] < arr[i-1]){
      temp = arr[i];
      arr[i] = arr[i-1];
      arr[i-1] = temp;
    }
  }
  for(i = 0; i < count; i++){
    printf("%d ",arr[i]);
  }
  return 0;
}

// 找位置，插入
#include <stdio.h>
int main()
{
	int n,i,j,x;
	scanf("%d",&n);
    int a[n+1];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&x);
 
	for(i=0;i<n;i++) if(a[i]>x)
    break;//找位置
	for (j=n-1;j>=i;j--){
		a[j+1]=a[j];
	}//移位置
	a[i]=x;//放入
	for(i=0;i<n+1;i++)
	printf("%d ",a[i]);
    return 0;
 } 