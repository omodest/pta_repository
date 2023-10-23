#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d",&n);
    struct STU
    {
        char num[17];
        int shi;
        int kao;
    }a[n];
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d",a[i].num,&a[i].shi,&a[i].kao);
    }
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j].shi)
            {
                printf("%s %d\n",a[j].num,a[j].kao);
            }
        }
    }
    return 0;
}