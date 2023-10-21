1. 使用数组索引的方式，也就是下方代码

2. 先装到数组，然后排序，然后遍历，通过index++的方式找最大值

#include <iostream>

using namespace std;
int main()
{
	int i,n,a[1000],count,max=0,num,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(count>max)
		{
			num=a[i];
 
			max=count;
		}
	}
	printf("%d %d",num,max);
}