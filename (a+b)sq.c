#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a and b\n");
	scanf("%d%d",&a,&b);
	c=(a*a)+(2*a*b)+(b*b);
	printf("Square of (a+b) is=%d",c);
}
