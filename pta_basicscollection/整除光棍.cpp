#include <iostream>


int main(){
	int gg = 1,odd,count = 0,k = 0;
	scanf("%d",&odd);
	while(true){
    count++;
    // 从gg大于odd开始，取gg/odd的商
		if(gg >= odd){ 
      k=1;
    }
		if(k){
      printf("%d",gg/odd);
    }
    // gg == 111下一次循环gg == 1111，这里的规律就是，每次gg都是乘10加1
    // 但int的范围是有限的，所以每次都让gg余一下odd，然后取余数(因为能除尽的部分可以不管，类似求最大公因式的辗转相除法)；

    // 理解：①. 1111 % 31 = 35 ... 26  ②. 111 % 31 = 3 ... 18 ; 181 % 31 = 5 ... 26。结果都是相同的
		gg = gg % odd;
		if(gg == 0)
      break;

		gg=gg*10+1;
	}
	printf(" %d",count);
}
