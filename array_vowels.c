#include<stdio.h>
#include<string.h>
void main()
{   
    int i,t,f,b,c,d,e;
	char a[1000];
	printf("Enter the characters to check vowel\n");
	gets(a);
	for(i=0;a[i]!='\o';i++)
	{
		if(a[i]=='a')
		{
			f++;
	    }
	    if(a[i]=='e')
	    {
	    	b++;
		}
		if(a[i]=='i')
		{
			c++;
		}
		if(a[i]=='o')
		{
			d++;
		}
		if(a[i]=='u')
		{
			e++;
		}
	}
	printf("vowals repeated 'a'=%d\n,\n'e'=%d\n,'i'=%d\n,'o'=%d\n,'u'=%d",f,b,c,d,e);
}