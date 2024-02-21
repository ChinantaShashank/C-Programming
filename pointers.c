#include<stdio.h>
void main()
{
	int x=10,y=20;
	int *p,*q,res;
	p=&x;
	q=&y;
	res=*p+*q;
	printf("The value of sum is %d",res);
}