#include<stdio.h>
void main()
{
	int a[5]={6,1,9,2,3},i,max=a[0];
	for(i=0;i<=4;i++)
	{
		if(max<=a[i])
		{
			max=a[i];
		}
	}
	printf("Max number is : %d",max);
}
