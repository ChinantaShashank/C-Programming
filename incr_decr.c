#include<stdio.h>
void main()
{
int a;
printf("Enter a number\n");
scanf("%d",&a);
if(a%6==0)
{
	a+=1;
    printf("The incremented value is %d",a);
	}	
else
{
	a-=1;
	printf("The decremented value is %d",a);
}
}