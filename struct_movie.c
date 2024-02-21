#include<stdio.h>
#include<string.h>
struct movie
{
	char moviename[50];
	char hero[50];
	char director[50];
};
/*function declaration*/
void printmovie( struct movie cinema);
void main()
{
	struct movie cinema1;
	strcpy(cinema1.moviename,"Bahubali");
	strcpy(cinema1.hero,"Prabhas");
	strcpy(cinema1.director,"S S Rajamouli");
	printmovie(cinema1);
}

void printmovie(struct movie cinema)
{
	printf("Movie tittle is : %s\n",movie.moviename);
	printf("Movie hero is : %s\n",movie.hero);
	printf("Movie Director is : %s\n",movie.director);
}
