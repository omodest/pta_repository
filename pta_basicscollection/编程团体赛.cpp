#include <iostream>

using namespace std;
// 使用哈希表的方式
int main(){
    int n;
    scanf("%d",&n);
    // 定义一个足够长的数组；
    // 以索引为队伍编号，索引所对的值为队伍总分
    int a,b,c,arr[1001] = {0},max=0,index=0;
    while(n--){
        scanf("%d-%d %d",&a,&b,&c);
        arr[a]+=c;
        if(arr[a]>max){
            max=arr[a];
            index=a;
        }
    }
    printf("%d %d",index,max);
    return 0;
}
 