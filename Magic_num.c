#include<stdio.h>
void main()
{
	int a,b,n,e;
	printf("Enter the values for n\n");
	scanf("%d",&n);
	while(n>0)
	{
		b=b*10+(n%10);
		b=b/10;
	}
	if(a>b)
	{
		e=a-b;
	}
	else
	{
		e=b-a;
	}
	printf("Magic is getting %d",(e-198));
}