#include <stdio.h>
 
int main () {

    int rabbit=0,turtle=0,minute,rest=-1,run=10;  
    scanf ("%d",&minute) ; 
    
    while(minute--){
        turtle += 3;        // 乌龟每分钟都走
        if (run-- > 0)      // run表示兔子还要跑的时间，run和rest一定是一个为0一个不为0
            rabbit += 9;
        if (run == 0 ){     // 兔子的十分钟跑完了，判断是否需要休息
            if (rabbit > turtle && rest != 0)  // rest是兔子休息时间
                rest = 30;   
            else 
                run = 10 ;
        }
        if (rest-- == 0)                   
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

