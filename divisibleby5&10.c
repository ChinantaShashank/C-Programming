#include<stdio.h>
void main()
{
	int a;
	printf("Enter the value for a \n");
	scanf("%d",&a);
	if(a%5==0 && a%10==0)
	{
		printf("%d is divisible by both 5 and 10",a);
	}
	else
	{
		printf("%d is not divisible by both 5 and 10",a);
	}
}