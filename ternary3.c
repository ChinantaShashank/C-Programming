#include<stdio.h>
void main()
{
	int y;
	printf("Enter any Year to scan");
	scanf("%d",&y);
	(y%4==0) ? (y%100!=0 ? printf("The year %d is a leap year",y) : (y%400==0) ? printf("The year %d is a leap year") : printf("The year %d is not a leap year",y);
}