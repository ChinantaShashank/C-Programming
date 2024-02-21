#include<stdio.h>
void main()
{
	int i,j,temp;
	int a[5]={6,1,9,2,3,};
	for(i=0;i<=4;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}	
	printf("a[i]= %d\n a[j]= %d",a[i],a[j]);
}