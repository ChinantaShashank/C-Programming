#include<stdio.h>
const int n=3;
void main()
{
	char *a[]={"Deepak","Akhil","Sameer","Karthikeya"};
	int i;
	for(i=0;i<n;i++)
	{
		printf("Name%d is %d\n",i,*a[i]);
	}
}