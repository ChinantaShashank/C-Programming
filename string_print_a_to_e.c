//Scan a string and Print those characters of astrings of a string where the character lies greater than >=a and <=e
#include<stdio.h>
void main()
{
	int i,n;
	char a[100];
	printf("Enter the characters : ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65 && a[i]>=97)
		 {
		   if(a[i]<=69 && a[i]<=101)
		    {
			  printf("%c",a[i]);
		    }
		}
}
}