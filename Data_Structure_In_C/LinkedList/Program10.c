#include<stdio.h>
#include<stdlib.h>

typedef struct Student {
	int id;
	float ht;
	struct Student *next;
}stud;
stud *head = NULL;
void addnode() {
	
	stud *newnode = (stud*)malloc(sizeof(stud));
	newnode->id = 1;
	newnode->ht = 5.5;
	newnode->next = NULL;
	head = newnode;
}
void printLL() {
	stud *temp = head;
	while(temp!=NULL) {
		printf("%d ",temp->id);
		printf("%f ",temp->ht);
		temp = temp->next ;
	}
	printf("\n");
}

void main() {
	addnode();
	printLL();
}

