#include<stdio.h>
#include<string.h>
struct teacher
{
	int id;
	char name[20];
};

void main()
{
	struct teacher T;
	T.id=100;
	strcpy(T.name,"Akhil");
	T.id=200;
	strcpy(T.id,"Isaac");
	printf("%d %s",T.id,T.name);
}