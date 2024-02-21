#include<stdio.h>
void main()
{
	int i,t;
	char a[100];
	printf("Eter the string value=");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a')
		{
			t++;
		}
	}
	printf("%d",t);
}