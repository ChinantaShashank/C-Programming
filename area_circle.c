#include<stdio.h>
#define pi 3.14
void main()
{
	float a,c,r;
	printf("Enter the radius of a circle : ");
	scanf("%f",&r);
	c=2*pi*r;
	a=pi*r*r;
	printf("Circumference of circle = %f\nArea of circle = %f",c,a);
}