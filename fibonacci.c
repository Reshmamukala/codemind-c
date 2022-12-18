#include<stdio.h>
int main()
{
    int n,i,t1=0,t2=1,n1;
    scanf("%d",&n);
    n1=t1+t2;
    printf("%d %d ",t1,t2);
    for(i=3;i<=n;i++)
    {
        printf("%d ",n1);
        t1=t2;
        t2=n1;
        n1=t1+t2;
    }
}