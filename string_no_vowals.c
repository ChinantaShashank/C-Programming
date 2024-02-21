//Scan a string and Print the string that skips the ovals
#include<stdio.h>
void main()
{
	int i,n;
	char a[100];
	printf("Enter the character : ");
	gets(a);
	for(i=0;i!='\0';i++)
	{
		if(a[i]!=65 && a[i]!=97 && a[i]!=69  && a[i]!=101 && a[i]!=73 && a[i]!=105 && a[i]!=79 && a[i]!=111 && a[i]!=85 && a[i]!=117)
		{
			printf("%c",a[i]);
		}
	}
}