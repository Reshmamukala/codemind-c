#include<stdio.h>
int main()
{
		int n;
		scanf("%d",&n);
		int rev=0,t=n,r;
		while(n!=0)
		{
			r=n%10;
			n=n/10;
			rev=rev*10+r;
		}
		printf("%d",rev);
    
}