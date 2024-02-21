#include<stdio.h>
#include<string.h>
void main()
{
	char a[20],b[20];
	int i,j,n,m,count=0;
	printf("Enter the first word\n");
	gets(a);
	printf("Enter the second word\n");
	gets(b);
	n=strlen(a);
	m=strlen(b);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j] && i==j)
			{
				count++;
			}
		}
	}
	if(count==i)
	{
		printf("Both the strings are same");
	}
	else
	{
		printf("Both the strings are different");
	}
}