#include<stdio.h>
void main()
{
	int n,a;
	char a[1000];
	printf("Enter the character\n");
	gets(a);
	for(i=0;i!="\0";i++)
	{
		if(a[i]==32)
		{
			n++;
		}
	}
	printf("%d",n);
}