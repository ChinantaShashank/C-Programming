#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float s;
	printf("Enter three values : ");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	s=(s*a)+(s*b)+(s*c);
	printf("The area of triangle is %f",s);
}