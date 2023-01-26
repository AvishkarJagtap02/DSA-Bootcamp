//stack using LinkedList
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node {
	int data;
	struct Node* next;
}
struct Node* top = NULL;
bool isEmpty() {
	if(head == NULL) {
		return true;
	}else {
		return false;
	}
}
struct Node* createNode() {
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	return newnode;
}
void addNode() {
	struct Node* newnode = createNode();
	if(head==NULL) {
		printf("Stack Underflow\n");
		break;
	}else {
		struct Node* temp = head;
		while(temp->next!=NULL) {
			temp=temp->next;
		}
		temp->next = newnode;
		newnode->next = NULL;
	}
}
int push() {
	if(isEmpty) {
		return -1;
	}else {
		addNode();
		return 0;
	}
}
void main() {
	char ch;
	do{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		printf("4.isEmpty\n");

		int ch;
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch) {
			case 1:
				push();
				break;
			case 2:
				pop;
				break;
			case 3:
				peek();
				break;
			case 4:
				isEmpty();
				break;
			default:
				printf("Invalid Choice\n");
				break;
			printf("Do You Want to Continue\n");
			scanf("%d",&ch);
		}while(ch == 'Y' || ch == 'y');
	}
}
