#include <iostream>

using namespace std;
// 按给定格式输出N的素因式分解表达式，即 N=p1^k1*p2^k2*…*pm^km，
// 其中pi为素因子并要求由小到大输出，指数ki为pi的个数；当ki为1即因子pi只有一个时不输出ki。
//   1323=3^3*7^2
int main()
{
    long int arr[8192] = { 0 }, a = 0, l = 0, flag = 1;
    scanf("%ld", &a);
   // 将输入的大整数赋值给变量b，方便后续比较
    long int b = a;
    printf("%ld=", a);
    // 特殊情况
    if (a == 0 || a == 1) 
    { 
      printf("%d", a); 
      return 0; 
    }
    // 从2开始到8191遍历所有可能的因子，统计a能整除的数的个数，并将结果存入数组arr中
    for (long int i = 2; i < 8192; i++) {
        if (a % i == 0) {
           // 当a能被i整除时，将i的值加入数组arr中，并继续遍历剩余的因子，直到a不能再被任何因子整除为止
            while (a % i == 0) {
                a /= i;
                arr[i]++;
            }
        }
    }
   // 从2开始到8191遍历数组arr，如果数组中某个元素的值为非零数（即a能被这个数整除），则输出该数和对应的因子个数（注意前缀符号的变化）
    for (long int i = 2; i < 8192; i++) {
        // 如果arr[i]的值不为0（即a能被i整除）
        if (arr[i]) {
             // 当flag的值不等于0并且arr[i]的值不为1时，输出“因子数*i^因子个数”的形式
            if (flag && arr[i] != 1) {
                printf("%ld^%ld", i, arr[i]);
                flag = 0; // 如果前面已经有其他因子数出现，则重置flag的值，以便区分不同因子数组合的情况
            }
            // 当flag的值不等于0并且arr[i]的值等于1时，直接输出因子数i...
            else if (flag && arr[i] == 1) {
                flag = 0;
                printf("%ld", i);
            }
            // ...否则（即flag的值为0且arr[i]的值不为0），输出“因子数*i^因子个数”的形式...（此时i可能重复出现）...
            else if (!flag && arr[i] != 1)printf("*%ld^%ld", i, arr[i]);
            else if (!flag && arr[i] == 1)printf("*%ld", i);
        }
    }
 
    return 0;
}