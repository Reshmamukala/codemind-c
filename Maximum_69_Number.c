#include<stdio.h>
int diginct(int n)
{
    int r,k=0;
    while(n>0)
    {
        r=n%10;
        k++;
        n=n/10;
    }
    return k;
}
int main()
{
    int n;
    scanf("%d",&n);
    int k=diginct(n);
    int x[k];
    for(int i=k-1;i>=0;i--)
    {
        x[i]=n%10;
        n=n/10;
    }
    for(int i=0;i<k;i++)
    {
        if(x[i]!=9)
        {
            x[i]=9;
            break;
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d",x[i]);
    }
}