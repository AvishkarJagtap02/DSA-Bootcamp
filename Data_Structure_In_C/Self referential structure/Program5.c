#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Movie {
	int noOfppl;
	char mName[20];
	float imdb;
	struct Movie *next;
}mv;

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
	
	movie3->noOfppl = 4;
	strcpy(movie3->mName,"RRR");
	movie3->imdb = 9.7;
	movie3->next = movie2;
	
	printf("%d\n",movie1->noOfppl);
	printf("%s\n",movie1->mName);
	printf("%f\n",movie1->imdb);
	printf("%p\n",movie1->next);
	
	printf("%d\n",movie2->noOfppl);
	printf("%s\n",movie2->mName);
	printf("%f\n",movie2->imdb);
	printf("%p\n",movie2->next);
	
	printf("%d\n",movie3->noOfppl);
	printf("%s\n",movie3->mName);
	printf("%f\n",movie3->imdb);
	printf("%p\n",movie3->next);
}

