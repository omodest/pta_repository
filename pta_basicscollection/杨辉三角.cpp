#include <iostream>

using namespace std;

int main()
{
   // 使用二维数组
    int i, j, n, a[10][10];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for(i = 2; i < n; i++)
        for(j = 1; j < i; j++)
            a[i][j] = a[i-1][j-1] + a[i-1][j];
    for(i = 0; i < n; i++)
    {
        for(j = 1; j < n - i; j++)  //此两行不加则打印直角形，加上则打印正三角形。
            printf(" ");            //第i（从0始终于n-1）行之前还需额外打印n-（i+1）个空格
        for(j = 0; j <= i; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    return 0;
}