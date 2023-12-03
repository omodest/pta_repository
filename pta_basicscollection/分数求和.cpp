#include <iostream>

using namespace std;
 
long long gcd(long long a,long long b) // 递归求最大公约数。
{
    if(a == 0)
        return 0;
    else
        return (b == 0) ? a : gcd(b, a % b);
}
 
int main()
{
    int N;
    long long lcp;//用以记录最小公倍数
    long long a,b,c,d;
    int i = 1;
    scanf("%d",&N);
    // 先处理第一个分数
    scanf("%lld/%lld",&a,&b);
    int t0 = gcd(a,b);
    if(a)
    {
        a /= t0;
        b /= t0;
    }
 
    while(i < N)
    {
        scanf("%lld/%lld",&c,&d);
        lcp = b / gcd(b,d) * d; //通过最大公约数换算出两个分母的最小公倍数
        a = a * lcp / b + c * lcp / d; // 通分后分子和
        b = lcp; // 通风后将分母修改为最小公倍数
        // 现在 a/b以及是加过第二个分数的结果,所需需要看一下是否要花间
        int t0 = gcd(a,b); 
        if(t0 != 0)
        {
            a = a / t0;
            b = b / t0;
        }

        i++;
    }

    // 整数部分为0 且 a不为 0
    if(a && a/b == 0)
        printf("%lld/%lld\n",a%b,b);
    // 小数部分为0
    else if(a%b == 0)
        printf("%lld\n",a/b);
    else
        printf("%lld %lld/%lld\n",a/b,a%b,b);
    return 0;
}