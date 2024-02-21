// And validates for the pattern aza
#include<stdio.h>
#include<string.h>
void scanz(char a[], int n)
{
	int i,j;
	char b[100];
	printf("Enter the characters : ");
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;i!='\0';i++)
	{
		if(a[i]==90)
		{
			for(i;i!='\0';i--)
			{
			   if(a[i-1]==65)
			   {
			      b[j]=i;
			   }
		    }  
	    }
    }
    printf("%s%s",a,b);
}

void main()
{
	int n;
	char a[n];
	scanz(a,n);
}