#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>       
#include <cmath>
#include <cstdlib> 
#include <vector>

using namespace std;

int N;

void F_L2_049(int j,int i,int * Uni) {    // 座位函数 
    int num_Stu = 1;    //  已分配有座位的人数 
    int * uni = new int [N];    // 每个学校的总人数 
    for(int k = 0;k < N;k++)
        uni[k] = Uni[k] * 10;

    while(num_Stu <= Uni[i] * 10) {
        int sum = 0;    // 下一个座位同上一个座位的间隔数 
        if(num_Stu % 10 == 0)
            cout<< j <<endl;
        else
            cout<< j <<" ";

        for(int k = 0;k < N;k++) {    // 控制条件 
            if(uni[k] == 1 && k > i)
                sum++;
            if(uni[k] > 0) {
                --uni[k];            
            sum += (int)(bool)uni[k];                    
            }
        }
        if(sum < 2)
            j += 2;
        else
            j += sum;                // 控制条件 
            
        num_Stu++;
    }
    delete [] uni;
}

int main()
{
    cin>>N;
    int * Uni = new int [N];    // 每个学校的队伍个数 
    for(int i = 0;i < N;i++)
        cin>>Uni[i];
    for(int i = 0;i < N;i++) {
        cout<<"#"<<i + 1<<endl;
        F_L2_049(i + 1, i, Uni);    // 座位函数 
    }
    delete [] Uni;
    return 0;
} 