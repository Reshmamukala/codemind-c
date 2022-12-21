#include<stdio.h>
int main()
{
    int a,b,gcd,i=1;
    scanf("%d%d",&a,&b);
    while(i<=a&&i<=b)
    {
        if(a%i==0&&b%i==0)
        {
           gcd=i; 
        }
        i++;
    }
    printf("%d",gcd);
}