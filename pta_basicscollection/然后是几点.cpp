1. C

   #include <iostream>
   int main(){
     // 当前时间 经过时间 当前小时数 当前分钟数 经过小时数 经过分钟数
     int starttime,crosstime,hour,minture,chour,cminture;
     scanf("%d %d",&starttime,&crosstime);
     // 拆分当前时间
     hour = starttime / 100;
     minture = starttime % 100;
     // 拆分经过时间
     chour = crosstime / 60;
     cminture = crosstime % 60;
     // 计算结果时间
     hour += chour;
     minture += cminture;
     // 校验分钟数
     if(minture >= 60){
       minture -= 60;
       hour++;
     }
     else if(minture < 0){
       minture += 60;
       hour--;
     }
     // 校验小时数
     if(hour >= 24){
       hour -= 24;
     }
     else if(hour < 0){
       hour += 24;
     }
     printf("%d%02d",hour,minture);

     return 0;
   }

2. 直接求和

import java.util.Scanner;

public class Main {
    		public static void main(String[] args) {
     			 Scanner in = new Scanner(System.in);
			      int a = in.nextInt(),b = in.nextInt();
            // 直接求和
			      int sum = a/100*60 + a%100 + b; //
			      int h = sum / 60;
			      int s = sum % 60;
			      System.out.print(h*100+s);
			    }
			}