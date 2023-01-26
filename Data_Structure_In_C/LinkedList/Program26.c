//Reverse singly Circular LinkedList
#include<stdio.h>
#include<stdlib.h>
typedef struct Demo {
	int data;
	struct Demo* next;
}Demo;
struct Demo* head =NULL;
struct Demo* createNode() {
	struct Demo* newnode = (struct Demo*)malloc(sizeof(struct Demo));   
	printf("Enter Node\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}
void addNode() {
	struct Demo* newnode = createNode();
	if(head==NULL) {
		head = newnode;
		newnode->next = head;
	}else {
		struct Demo* temp = head;
		while(temp->next !=head) {
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = head;
	}
}
void printLL() {
	struct Demo* temp = head;
	while(temp->next!=head) {
		printf("| %d |->",temp->data);
		temp=temp->next;
	}
	printf("|%d|",temp->data);
	printf("\n");
}
void ReverseLL() {						//10 -> 20 -> 30 -> 40
	struct Demo* temp1 = NULL;
	struct Demo* temp2 = NULL;
	struct Demo* temp3 = head;
	while(temp2!=head) {
		temp2 = temp3 -> next;
		temp3->next = temp1;
		temp1 = temp3;
		temp3 = temp2;
	}
	head->next = temp1;
	head= temp1;
}	
void main() {
	int n;
	printf("Enter No of Nodes You Want\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		addNode();
	}
	printLL();
	ReverseLL();
	printLL();
}
