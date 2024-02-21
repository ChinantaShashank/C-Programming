#include<stdio.h>
void main()
{
	int n,m,a[10][10],i,j;
	printf("Enter the sizes of Array\n");
	scanf("%d%d",&n,&m);
	printf("Enter the elements of an Array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		scanf("%d",&a[i][j]);
	    }
	}
	printf("The elements of array are: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("%d\t",a[i][j]);
    	}
    	printf("\n");
	}
}
