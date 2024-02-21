#include<stdio.h>
void main()
{
	int age;
	float c=123;
	char g;
	printf("Enter M for male or F for female or T for Transgender\n");
	scanf("%c",&g);
	printf("Enter age\n");
	scanf("%d",&age);
	if(g=='M'||g=='F'||g=='T')
	{
		if( age>=58)
		{
			printf("After discount =%f",0.9*c);
		}
		else
		{
			printf("Age is less than 58");
		}
	}
	else
	{
		printf("Invalid gender");
	}
}
