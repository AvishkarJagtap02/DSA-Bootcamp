#include<stdio.h>
#include<stdlib.h>

typedef struct Student {
	int id;
	float ht;
	struct Student *next;
}stud;

//after completing the method execution addnode method will be popped from stack and head will be null again
void addnode(stud *head) {
	
	stud *newnode = (stud*)malloc(sizeof(stud));
	newnode->id = 1;
	newnode->ht = 5.5;
	newnode->next = NULL;
	head = newnode;
}
void printLL(stud *head) {
	stud *temp = head;
	while(temp!=NULL) {
		printf("%d ",temp->id);
		printf("%f ",temp->ht);
		temp = temp->next ;
	}
	printf("\n");
}
void main() {
	stud *head = NULL;
	addnode(head);
	printLL(head);
}

