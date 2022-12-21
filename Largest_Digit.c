#include<stdio.h>
int main()
{
    int n,large=0,res=0;
    scanf("%d",&n);
    while(n>0)
    {
        res=n%10;
        if(res>large)
        {
            large=res;
        }
        n=n/10;
    }
    printf("%d",large);
}
