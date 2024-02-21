#include<stdio.h>
void main()
{
	int age;
	printf("Enter the age\n");
	scanf("%d",&age);
	(age>=18)?printf("Age is greater than or equal to 18 "):printf("Not greater than 18");
}