#include<stdio.h>
#include<string.h>
void main()
{
  int i,n;
  char a[100],b[100];
  printf("Enter the characters : ");
  gets(a);
  printf("Enter the score: ");
  gets(b);
  n=strlen(b);
  for(i=0;i<=n;i++)
  {
    if(b[0]==49)
    {
      if(b[1]<=48)
      {
        if(b[2]<=48)
        {
        	printf("%s a century",b[i]);
        	break;
        }
        else
        {
        	printf("%s not a century",a[i]);
		}
      }
	   else
        {
        	printf("%s not a century",a[i]);
		} 
    }
	 else
        {
        	printf("%s not a century",a[i]);
		} 
  }
}