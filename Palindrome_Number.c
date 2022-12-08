#include<stdio.h>
int main()
{
    int x,j;
    scanf("%d",&x);
    for(j=1;j<=x;j++)
    {
        int n;
		scanf("%d",&n);
		int rev=0,t=n,r;
		while(n!=0)
		{
			r=n%10;
			rev=rev*10+r;
			n=n/10;
		}
		if(t==rev) printf("True
");
		else printf("False
");
    }
}