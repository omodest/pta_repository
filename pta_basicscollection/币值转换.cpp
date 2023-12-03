#include <iostream>
#include <cmath>


using namespace std;
int main() {
  
    int money;
    scanf("%d", &money);
    // 输入为0的特殊情况
    if (money == 0) {
        printf("a");
        return 0;
    }
    // 使用数组(本质上也是哈希表)
    int len = 0;
    int digits[9] = {0};
    while (money) {
        digits[len++] = money % 10;
        money /= 10;
    }
    // 哈希表 分别代表  个(没有单位) 十 百 千 万 十万 百万 千万 亿
    char currencyUnit[9] = {'\0', 'S', 'B', 'Q', 'W', 'S', 'B', 'Q', 'Y'};
    // 从最高位开始遍历
    for (int i = len - 1; i >= 0; i--) {
        if (digits[i]) {
            // 将didigits转为小写字母，后接单位（个位没有单位，currencyUnit的最后一个元素是’\0）
            printf("%c%c", digits[i] + 'a', currencyUnit[i]);
        }
        // 判断是否需要万这个单位
        else if (i == 4) {
            // 判断十万，百万，千万来决定是否需要万
            if (digits[5] || digits[6] || digits[7]) {
                printf("W");
            }
        }
        // 判断中途为0
        else if (i - 1 >= 0 && digits[i - 1]) {
            printf("a");
        }
    }

    return 0;
}
