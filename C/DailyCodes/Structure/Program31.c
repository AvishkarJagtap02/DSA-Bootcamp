#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Showroom {
	char sName[20];
	int cars_Count;
	float distance;
};
void main() {
	struct Showroom *ptr = (struct Showroom *)malloc(sizeof(struct Showroom));

	strcpy(ptr->sName,"Toyota");
	ptr->cars_Count=200;
	ptr->distance = 9.8;

	printf("%s\n",ptr->sName);
	printf("%d\n",ptr->cars_Count);
	printf("%f\n",ptr->distance);
}
