#include<stdio.h>
void main()
{
	int a[10],i,j,n,t;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j]&&(i!=j))
			printf("The repeated number is: %d\n",a[i]);
		}
	}
}