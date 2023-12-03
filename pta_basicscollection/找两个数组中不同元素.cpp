#include<stdio.h>
int main()
{
	int a[20], b[20], c[20];
	int m, n, i, j, k=0;
  	bool flag = false;
	scanf("%d", &m);
  	// 给第一个数组赋值
	for(i=0; i<m; i++){
    	scanf("%d", &a[i]);
 	}
  	// 第二个数组赋值 
	scanf("%d", &n);
	for(i=0; i<n; i++){
    	scanf("%d", &b[i]);
  	}
  // 两个数组之间比较，装a数组中不重复的数
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(a[i]==b[j]){
				flag = true;
				break;
			}
		}
		if(!flag){
			c[k]=a[i];
			k++;
		}
    flag = false;
	}
    // 两个数组之间比较，装b数组中不重复的数
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(b[i]==a[j]){
				flag = true;
				break; 
			}
		}
		if(!flag){
			c[k]=b[i];
			k++;
		}
    	flag = false;
	}
    // 格式需要，这里将第一个数先输出
	printf("%d", c[0]);
    // 结果数组自己查重
	for(i=1; i<k; i++){
		for(j=0; j<i; j++){
			if(c[i]==c[j])
				break;
		}
		if(j==i)
			printf(" %d", c[i]);
		}
	return 0;	
}

