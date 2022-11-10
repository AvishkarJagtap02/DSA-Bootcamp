#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct IPL {
	char sName[20];
	int Teams;
	double price;
}obj;
void main() {
	struct IPL *ptr = (struct IPL*)malloc(sizeof(struct IPL));
	strcpy((*ptr).sName,"Tata");
	ptr->Teams = 8;
	(*ptr).price = 10.00;
	printf("%s\n",(*ptr).sName);
	printf("%d\n",(*ptr).Teams);
	printf("%f\n",(*ptr).price);

}
