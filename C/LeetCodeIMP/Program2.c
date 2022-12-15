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
/*void concatLL() {
	struct Node* temp = head1;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = head2;
}*/
int countNodes(struct Node* head) {
	int count = 0;
	struct Node* temp = head;
	while(temp != NULL) {
		temp = temp->next;
		count++;
	}
	return count;
}
void concatNLL(int num) {
	if(num<1 || num > countNodes(head2)) {
		printf("Invalid number!!\n");
	}else {
		struct Node* temp1 = head1;
		while(temp1->next != NULL) {
			temp1 = temp1->next;
		}
		struct Node* temp2 = head2;
		int val = countNodes(head2) - num;
		while(val) {
			temp2 = temp2->next;
			val--;
		}
		temp1->next = temp2;
	}
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
	//concatLL();
	int num;
	printf("\nEnter Number of nodes you want to concat\n");
	printSLL(head2);
	printf("\n");
	scanf("%d",&num);
	concatNLL(num);
	printSLL(head1);
}
