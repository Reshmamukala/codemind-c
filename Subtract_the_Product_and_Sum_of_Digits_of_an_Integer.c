#include<stdio.h>
int main()
{
    int n,r,sum=0,m=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        m=m*r;
        n=n/10;
    }
    printf("%d",m-sum);
}