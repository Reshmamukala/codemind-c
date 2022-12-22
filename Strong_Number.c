#include <stdio.h>
int main()  
{  
    int i, n, n1, s1=0,j;  
    long fact;
    scanf("%d", &n);  
    n1=n;  
    for(j=n;j>0;j=j/10) 
    {  
        fact=1;  
        for(i=1;i<=j%10;i++)  
        {  
            fact=fact*i;  
        }  
         s1=s1+fact;  
    }  
    if(s1==n1)  
    {  
        printf("The number %d is a strong number", n1);  
    }  
    else  
    {  
        printf("The number %d is not a strong number", n1);  
    }  
}