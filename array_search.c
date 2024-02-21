#include<stdio.h>
void main()
{
	int a[50],i,n,k;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search element\n");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(k==a[i])
		{
			printf("The position of %d is %d\n",k,i);
	    }
	}
}