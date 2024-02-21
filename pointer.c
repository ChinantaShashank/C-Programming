#include<stdio.h>
void main()
{
	int a[10],*ptr,i,n;
	printf("Enter the size of array \n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    *ptr=a;
    printf("The elements of array are : ");
    for(i=0;i<n;i++)
	{   
	    ptr=&a[i];
		printf("%d\n",*ptr);
    }
}