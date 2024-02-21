#include<stdio.h>
void main()
{   
    int n;
    printf("Enter the value to find Sum of Digits\n");
    scanf("%d",&n);
	int sd(n)
	{
		if(n==0)
		 return 0;
		
		return((n%10)+sd(n-1));
	}
	printf("Sum of digits = %d",sd(n));
}