#include <stdio.h>
 
int main () {

    int rabbit=0,turtle=0,minute,rest=-1,run=10;  
    scanf ("%d",&minute) ; 
    
    while(minute--){
        turtle += 3;        // �ڹ�ÿ���Ӷ���
        if (run-- > 0)      // run��ʾ���ӻ�Ҫ�ܵ�ʱ�䣬run��restһ����һ��Ϊ0һ����Ϊ0
            rabbit += 9;
        if (run == 0 ){     // ���ӵ�ʮ���������ˣ��ж��Ƿ���Ҫ��Ϣ
            if (rabbit > turtle && rest != 0)  // rest��������Ϣʱ��
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

