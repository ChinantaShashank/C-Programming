#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int *p[n],a[n],i;
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		p[i]=&a[i];
	}
	
	for(i=0;i<n;i++)
	{
		printf("Value of a[%d] = %d\n",i,*p[i]);
	}
}