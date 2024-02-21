#include<stdio.h>
void main()
{
	int a,b,c;
	float avg;
	printf("Enter three marks below 20\n");
	scanf("%d%d%d",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("Average =%f\n",avg);
	if(a>b&&a>c)
	{
		printf("%d is greater than others",a);
	}
	if(b>a&&b>c)
	{
		printf("%d is greater than others",b);
	}
	if(c>a&&c>b)
	{
		printf("%d is greater than others",c);
	}
	if((a==b)&&(b==c)&&(c==a))
	{
		printf("All are equal");
	}
	else
	{
		printf("Invalid input");
	}
}