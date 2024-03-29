#include<stdio.h>

// 将名次最靠前的学生与名次最靠后的异性学生分为一组
// 输入第一行给出正偶数N（≤50），即全班学生的人数。此后N行，按照名次从高到低的顺序给出每个学生的性别（0代表女生，1代表男生）和
// 姓名（不超过8个英文字母的非空字符串），其间以1个空格分隔。这里保证本班男女比例是1:1，并且没有并列名次
int main()
{
    int N, sex[50], flag[50] = { 0 }, i, j;  // flag是标记数组，1表示当前学生以及匹配同桌，0表示没有
    char name[50][20]; // 这个二维数组用来存储姓名
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d %s", &sex[i],name[i]);  // 先获取输入的所有学生姓名学生性别
    }
    // i从头开始，j从尾开始
    for (i = 0; i < N; i++)
    {
        for (j = N - 1; j >= 0; j--)
        {
            if (flag[i] == 0 && flag[j] == 0 && sex[i] != sex[j])  // 如果i、j的性别不同;并且表示数组表示它们都没有匹配的话就输出
            {
                printf("%s %s\n", name[i], name[j]);
                flag[i] = 1;
                flag[j] = 1;
                break; // 匹配成功直接跳出这层循环
            }
        }
    }
    return 0;
}
