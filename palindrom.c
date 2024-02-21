#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter a number :");
	scanf("%d",&a);
	b=(a%10);
    c=(b%10);
    d=(c%10);
    if(b==d)
    {
     printf("It is a palindrome");
	}
	else
	{
		printf("It is not a palindrome");
	}
}