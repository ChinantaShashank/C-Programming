// Count the upper case characters in a string and print it 
#include<stdio.h>
#include<string.h>
void main()
{
	int i,n;
	char a[100];
	printf("Enter the characters\n");
	gets(a);
	int len=strlen(a);
	for(i=0;i<=len;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			n++;
		 } 
	}
	printf("No. of upper case characters in %s are : %d",a,n);
}
