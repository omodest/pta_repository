#include <stdio.h>
 
int main () {

    int rabbit=0,turtle=0,minute,rest=-1,run=10;  
    scanf ("%d",&minute) ; 
    // 以时间作为循环条件
    while(minute--){
        turtle += 3;  // turtle表示乌龟走的路程
        if (run-- > 0)     
            rabbit += 9; // rabbit表示兔子头的路程
        if (run == 0 ){   // 兔子跑完10分钟,然后判断
            if (rabbit > turtle && rest != 0)  
                rest = 30;   // 兔子休息的标志
            else 
                run = 10 ; // 兔子继续跑
        }
        if (rest-- == 0)  // 休息完了兔子开始跑   
            run = 10;
    }
    if(turtle > rabbit)
        printf("@_@ %d",turtle);
    else if (rabbit > turtle)
        printf("^_^ %d",rabbit);
    else 
        printf("-_- %d",rabbit);
 
    return 0 ;
}

