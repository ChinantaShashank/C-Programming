#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="shashankPWIOI";
	char b[]="shashankPWIOI";
	char c[]="shashank333";
	printf("%d\n",strcmp(a,b));
	int result=strcmp(c,a);
	printf("%d",result);
}