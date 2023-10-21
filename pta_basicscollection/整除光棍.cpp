#include <iostream>


int main(){
	int gg = 1,odd,count = 0,k = 0;
  // int ww;
	scanf("%d",&odd);
	while(true){
    count++;
    
		if(gg >= odd){ 
      k=1;
    }
    // gg要大于等于odd才往执行该分支
		if(k){
      printf("%d",gg/odd);
    }
    // ww = gg;
		gg = gg % odd;
    // 找到最小s
		if(gg == 0)
      break;
    // 这里本来是需要使用原始的gg乘10加1，int的范围是有限的，所以每次都让gg余一下odd；
    // 理解：gg%odd除尽了的部分不需要考虑了，只需要将除不尽的余数乘10加1
    // 举个例子：这里使用的是：111 % 31 = 3 ... 18 ; 181 % 31 = 5 ... 26 ；最终的结果是26
    // 本质上和不使用gg%odd的：1111 % 31 = 35 ... 26 没有区别
		gg=gg*10+1;
    // gg=ww*10+1;
	}
	printf(" %d",count);
}
