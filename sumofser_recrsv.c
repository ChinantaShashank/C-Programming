#include<stdio.h>
void main()
{
	int n;
	printf("Enter value of n\n");
	scanf("%d",&n);
	int s(n)
	{
		if(n==1)
		 return 1;
		else 
		return((n)+s(n-1));
    }
	printf("Sum of series 1+2+...+n = %d",s(n));
}
