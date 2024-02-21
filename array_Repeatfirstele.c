#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    printf("The elements of array are");
    for(int i;i<5;i++)
	{
		a[i]=a[0];
		printf("\n%d",a[i]);
	}
}
