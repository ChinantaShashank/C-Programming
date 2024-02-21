#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the values of a  and b : ");
	scanf("%d%d",&a,&b);
	add(&a,&b);
	int x=&a,y=&b;
}

void add(int *x,int *y)
{
	int s;
	s = *x+*y;
	printf("Sum = ",s);
}