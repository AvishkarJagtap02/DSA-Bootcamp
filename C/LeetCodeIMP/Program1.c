//concat 2 LinkedList
#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *next;
};
struct Node *head1=NULL;
struct Node *head2=NULL;
struct Node* createNode() {
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	return newnode;
}
void addNode(struct Node** head) {
	struct Node* newnode = createNode();
	struct Node* temp = *head;
	if(*head == NULL) {
		*head = newnode;
	}else {
		struct Node *temp = *head;
		while(temp->next != NULL) {
			temp =temp->next;
		}
		temp->next = newnode;
	}
}
void printSLL(struct Node* head) {
	struct Node*temp= head;
	while(temp->next!=NULL) {
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|->",temp->data);
	
}
void concatLL() {
	struct Node* temp = head1;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = head2;
}
void main() {
	int nodecount;
	printf("Enter No.of Nodes You want For Linked List 1\n");
	scanf("%d",&nodecount);
	for(int i=1;i<=nodecount;i++) {
		addNode(&head1);
	}
	printf("Enter No.of Nodes You want For Linked List 2\n");
	scanf("%d",&nodecount);
	for(int i=1;i<=nodecount;i++) {
		addNode(&head2);
	}
	printSLL(head1);
	concatLL();
	printSLL(head2);
}
