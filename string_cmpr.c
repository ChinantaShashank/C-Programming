#include<stdio.h>
void main()
{
	char a[10],b[10];
	int i,j,m,n,t;
	printf("Enter the size of array A\n");
	scanf("%d",&n);
	printf("Enter the size of array B\n");
	scanf("%d",&m);
	printf("Enter the letters of array A containing %d",n);
	for(i=0;i<n;i++)
	{
		scanf("%s\o",a[i]);
	}
	printf("Enter the letters of array B containing %d",m);
	for(j=0;j<n;j++)
	{
		scanf("%s\o",b[j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				t++;
			}
			else
			{
				break;
			}
		}
	}
	if((n==m)&&(t<=0))
	{
		printf("String 1 and String 2 are equal and no. of letters is %d",t);
	}
	else
	{
		printf("String 1 and 2 are not equal");
	}
}