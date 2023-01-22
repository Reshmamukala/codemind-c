#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100];
    int i,j,temp,len=0;
    scanf("%[^
]s",&str);
	for(i=0;str[i]!=NULL;i++)
	{
		len++;
	}
	i=0;
	j=len-1;
	while(i<j)
	{
		temp=str[j];
		str[j]=str[i];
		str[i]=temp;
		i++;
		j--;
	}
	printf("%s",str);
}