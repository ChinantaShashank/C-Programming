#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	if((a%2==0)&&(a%3==0))
	{
		printf("I am analyzing the problem properly");
	}
	else
	printf("I have to practice more");
}