#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Company {
	char cName[20];
	int EmpCount;
	float revenue;
};
void main() {
	struct Company *ptr = (struct Company *)malloc(sizeof(struct Company));

	strcpy(ptr->cName,"Veritas");
	ptr->EmpCount=2000;
	ptr->revenue = 9.8;

	printf("%s\n",ptr->cName);
	printf("%d\n",ptr->EmpCount);
	printf("%f\n",ptr->revenue);
}
