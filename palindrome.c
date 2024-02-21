#include<stdio.h>
void main()
{
	int n,temp,sum=0;
	printf("Enter a Palindrome\n");
	scanf("%d",&n);
	temp=n;sum=0;
	while(n>0)
	{
		sum=(sum*10)+(n%10);
		n=n%10;
	}
	if(temp==sum)
	{
		printf("%d is Palindrome",temp);
	}
	else
	printf("%d is nto a Palindrome",temp);
}