#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Society {
	char sName[20];
	int Wings;
	double AvgRent;
};
void main() {
	struct Society *ptr = (struct Society*)malloc(sizeof(struct Society));
	strcpy((*ptr).sName,"VishvaVihar");
	ptr->Wings = 8;
	(*ptr).AvgRent = 10.00;
	printf("%s\n",(*ptr).sName);
	printf("%d\n",(*ptr).Wings);
	printf("%f\n",(*ptr).AvgRent);
}
