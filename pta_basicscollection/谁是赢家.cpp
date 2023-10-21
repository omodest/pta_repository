#include <iostream>

using namespace std;

int main()
{
	int pa,pb,p1,p2,p3,count;
	scanf("%d %d\n",&pa,&pb);
	scanf("%d %d %d",&p1,&p2,&p3);
	count=p1+p2+p3;
  // a的观众票多，且有评委票 ；或者评委票都在a这 a赢
	if( pa>pb && count!=3 || count == 0)
	{
		printf("The winner is a: %d + %d",pa,3-count);
	}
	else
	{
		printf("The winner is b: %d + %d",pb,count);
	}
	return 0;
}
