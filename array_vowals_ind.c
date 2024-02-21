#include<stdio.h>
void main()
{
 int i,t,f,b,c,d,e;
	char a[1000];
	printf("Enter the characters to check vowel\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
    {
    	(a[i]=='a'||a[i]=='A')?b++:(a[i]=='e'||a[i]='E')?c+:(a[i]=='i'||a[i]=='I')?d++:(a[i]=='o'||a[i]=='O')?e++:(a[i]=='u'||a[i]=='U')?f++:
    }
	printf("vowals repeated 'a'=%d\n,\n'e'=%d\n,'i'=%d\n,'o'=%d\n,'u'=%d",b,c,d,e,f);	
}