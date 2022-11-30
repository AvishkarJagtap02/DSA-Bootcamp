#include<stdio.h>
#include<stdlib.h>

typedef struct Student {
	int id;
	float ht;
	struct Student *next;
}stud;
void acessData(stud *head) {
	stud *temp = head;
	while(temp!=NULL) {
		printf("%d ",temp->id);	
		printf("%f ",temp->ht);
		temp = temp->next;
	}
	printf("\n");
}
void main() {
	stud *head = NULL;
	stud *newnode = (stud*)malloc(sizeof(stud));
	newnode->id = 1;
	newnode->ht = 5.5;
	newnode->next = NULL;
	head = newnode;
	
	newnode = (stud*)malloc(sizeof(stud));
	newnode->id = 2;
	newnode->ht = 6.5;
	newnode->next = NULL;

	head->next = newnode;

	newnode = (stud*)malloc(sizeof(stud));
	newnode->id = 3;
	newnode->ht = 7.5;
	newnode->next = NULL;

	head->next->next = newnode;
	acessData(head);

}

