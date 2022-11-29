#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};
void main() {
	
	struct Node *head = NULL;

	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = 10;
	newNode->next = NULL;

	head = newNode;
	struct Node *temp = head;
	
	newNode = (struct Node*)malloc(sizeof(struct Node));
	
	newNode->data = 20;
	newNode->next = NULL;

	head->next = newNode;
	
	newNode = (struct Node*)malloc(sizeof(struct Node));
	
	newNode->data = 30;
	newNode->next = NULL;

	head->next->next = newNode;

	while(temp!=NULL) {
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

