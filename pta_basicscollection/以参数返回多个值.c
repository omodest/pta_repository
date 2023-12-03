#include <stdio.h>

void calculateStats(int *arr, int size, int *max, int *min, int *count) {
    
    int sum = 0;
    *max = *min = arr[0];
    // 循环找最大值,最小值,求和
    for (int i = 0; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
        sum += arr[i];
    }
    
    double average = (double)sum / size;
    // 找大于平均数的数值个数
    *count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > average) {
            (*count)++;
        }
    }
}

int main() {
    
    int T; 
    scanf("%d", &T);
    // 循环处理
    while (T--) {
        // 每次循环第一次输入的是数组长度
        int n; 
        scanf("%d", &n);
        
        int arr[n];  
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        int max, min, count;
        
        calculateStats(arr, n, &max, &min, &count);
        
        printf("%d %d %d\n", max, min, count);
    }
    
    return 0;
}