#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0,j=0, a = 0, sum=0,num = 0,temp=0,qidian=0,longqidian=0;
	int x = sqrt(n);
	for (i = 2;i <= x;i++)
	{
		num = 0;
		sum = n;
		qidian = i;
		for (j = i;sum%j==0&&sum!=0;j++)
		{
			sum /= j;
			num++;
		}
		if (num > temp)
		{
			temp = num;//筛选最长因子个数
			longqidian = qidian;
		}
	}
	if (temp == 0)
		printf("1\n%d", n);
	else
	{
		printf("%d\n", temp);
		i = longqidian;
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