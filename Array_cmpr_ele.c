#include<stdio.h>
void main()
{
	int n,a[10],i;
	printf("Enter the size of Array\n");
	scanf("%d",&n);
	printf("Enter the elements of an Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The elements of array are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
