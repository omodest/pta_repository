#include <stdio.h>

// 首先对前17位数字加权求和，权重分配为：{7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2}；
// 然后将计算的和对11取模得到值Z；最后按照以下关系对应Z值与校验码M的值
int main(){
    int N;
    int sax[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char num[]={'1','0','X','9','8','7','6','5','4','3','2'};
    scanf("%d",&N);
    char ID[19];
    int d,sum,count=0;
    for(int i=0;i<N;i++){ // 身份证个数
        scanf("%s",ID);
        // 对前17位加权（如果需要前17位为数字，可以在循环控制条件中加一个判断）
        for(d=0,sum=0;d<17;d++){
            sum=sum+(ID[d]-'0')*sax[d]; 
        }
        // 判断是否与校验码匹配
        if(ID[17]==num[sum%11]){
            count++;
        }else{
            puts(ID);//等价printf("%s\n",ID);
        }
    }
    if(count==N){
        printf("All passed");
    }
    return 0;
}