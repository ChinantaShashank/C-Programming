#include<stdio.h>
void main()
{   
    const int n=3;
	int i,*p[n],var[]={10,100,1000};
	for(i=0;i<n;i++)
	{
		p[i]=&var[i];
	}
	for(i=0;i<n;i++)
	{
	printf("%d\t",*p[i]);
	}
}
