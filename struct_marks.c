#include<stdio.h>
struct marks
{
	tm=m1+m2+m3+m4;
	p=(tm/80)*100;	
};

void main()
{

	int m1,m2,m3,m4,tm,p;
	printf("Enter the marks for 4 subjects less than 20 each : ");
	scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
	struct marks m;
    printf("Total marks = %d\nPercentage = %d",m.tm,m.p);
}