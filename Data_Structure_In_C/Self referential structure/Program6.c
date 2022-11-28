#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Movie {
	int noOfppl;
	char mName[20];
	float imdb;
	struct Movie *next;
}mv;

void acessData(mv *ptr) {

	printf("%d\n",ptr->noOfppl);
	printf("%s\n",ptr->mName);
	printf("%f\n",ptr->imdb);
}
void main() {
	mv *movie1 = (mv*)malloc(sizeof(mv));
	mv *movie2 = (mv*)malloc(sizeof(mv));
	mv *movie3 = (mv*)malloc(sizeof(mv));
	
	movie1->noOfppl = 4;
	strcpy(movie1->mName,"Drishyam");
	movie1->imdb = 9.7;
	movie1->next = movie2;
	
	movie2->noOfppl = 5;
	strcpy(movie2->mName,"Kantara");
	movie2->imdb = 9.8;
	movie2->next = movie3;
	
	movie3->noOfppl = 6;
	strcpy(movie3->mName,"RRR");
	movie3->imdb = 9.7;
	movie3->next = movie2;
	
	acessData(movie1);
	acessData(movie2);
	acessData(movie3);
}

