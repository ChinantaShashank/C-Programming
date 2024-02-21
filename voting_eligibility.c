#include<stdio.h>
void main()
{
	char g;
	int age;
	printf("Enter m for male, f for female or t for transgender \n");
	scanf("%c",&g);
	printf("Enter the age \n");
	scanf("%d",&age);
	if(g=='m')
	{
		printf("The person is male \n");
	}
	if(g=='f')
	{
		printf("The person is female \n");
	}
	if(g=='t')
	{
		printf("The person is transgender \n");
	}                                  
	if(age>=18)
	{     
		printf("The person is eligible");
	}  
	if(age<18)
	{
		printf("The person is not eligible");
	}                             
}
       