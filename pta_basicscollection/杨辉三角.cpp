#include <iostream>

using namespace std;

int main()
{
   // 使用二维数组
    int i, j, n, a[10][10];
    scanf("%d", &n);
    for(i = 0; i < n; i++) // 这一步是将j=0的一列，和左上右下对角线的值都给1；构建杨辉三角的外边
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    // 杨辉三角的中间内容，i从2开始因为前两排都是0，一直到最后一排
    // g从第二列开始，到倒数第二排
    for(i = 2; i < n; i++)  
        for(j = 1; j < i; j++)
            a[i][j] = a[i-1][j-1] + a[i-1][j];
    for(i = 0; i < n; i++)
    {
        // 每一排，根据非1的j的个数，判断在开头需要加几个空格（额外打印n-（i+1）），比如i = 3两个空格，i = 4三个空格
        for(j = 1; j < n - i; j++)  
            printf(" ");           
        // 打印所有数据
        for(j = 0; j <= i; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    return 0;
}