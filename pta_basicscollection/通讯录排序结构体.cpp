#include <stdio.h>
 
typedef struct fri{
    char name[10];
    int birthday;
    char tel[17];
};
 
int main(){
    int n, i, j;
    scanf("%d", &n);
    
    struct fri friends[n], temp; // temp:交换变量
    
    for( i=0; i<n; i++ )
        scanf("%s %d %s", &friends[i].name, &friends[i].birthday, &friends[i].tel);
    
    // 选择排序   生日越小，年龄越大
    for( i=0; i<n; i++ ){
        int min = i;
        for( j=i+1; j<n; j++ )
            if( friends[min].birthday > friends[j].birthday )
                min = j;
        
        if( min != i ){
            temp = friends[min];
            friends[min] = friends[i];
            friends[i] = temp;
        }
    }
    
    for( i=0; i<n; i++ )
        printf("%s %d %s\n", friends[i].name, friends[i].birthday, friends[i].tel);
    
    return 0;
}