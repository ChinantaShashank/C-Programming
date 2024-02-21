#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a and b\n");
	scanf("%d%d",&a,&b);
	printf("add=%d\n substract=%d\n multiply=%d\n division=%d\n modulus=%d",(a+b),(a-b),(a*b),(a/b),(a%b));
}