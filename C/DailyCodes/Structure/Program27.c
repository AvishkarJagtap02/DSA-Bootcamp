#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct OTT {
	char pName[20];
	int UsersCount;
	float price;
};
void main() {
	struct OTT *ptr1 = (struct OTT*)malloc(sizeof(struct OTT));
	strcpy(ptr1->pName,"PrimeVideo");
	ptr1-> UsersCount = 100000;
	ptr1->price = 350.0;

	printf("%s\n",ptr1->pName);
	printf("%d\n",ptr1->UsersCount);
	printf("%f\n",ptr1->price);

	struct OTT *ptr2 = (struct OTT*)malloc(sizeof(struct OTT));
	strcpy(ptr2->pName,"Netflix");
	ptr2->UsersCount = 200000;
	ptr2->price = 450.0;
	
	printf("%s\n",ptr2->pName);
	printf("%d\n",ptr2->UsersCount);
	printf("%f\n",ptr2->price);
}
