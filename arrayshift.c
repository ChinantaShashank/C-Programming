#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5},temp;
	temp=a[0];
	for(i=0;i<5;i++)
	{   
		a[i]=a[i+1];
	}
	a[5]=temp;
	printf("The array after shifting : ");
	for(i=0;i<=4;i++)
	{
	printf("%d\n",a[i]);
    }
}