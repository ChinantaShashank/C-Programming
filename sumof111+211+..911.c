#include<stdio.h>
void main()
{
int i=111,n=911,sum;
if(n<1000)	
{
	for(int i=111;i<=n;i+=100)
	{
		sum+=i;
	}
}
printf("Sum of digits of 111 + 211 + ..... + 911 = %d",sum);
}