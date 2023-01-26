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
	}else {
		struct Demo* temp = head;
		while(temp->next !=NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void addFirst() {
	struct Demo* newnode = createNode();
	if(head == NULL) {
		head = newnode;
	}else {

	newnode->next = head;
	head=newnode;
	}
}
int countNodes() {		
	struct Demo* temp = head;
	int count=0;
	while(temp->next!=NULL) {
		count++;
		temp=temp->next;
	}
	printf("%d",count);
	return count;
}

void printLL() {
	struct Demo* temp = head;
	while(temp->next!=NULL) {
		printf("| %d |->",temp->data);
		temp=temp->next;
	}
	printf("|%d|",temp->data);
	printf("\n");
}
void ReverseLL() {						//10 -> 20 -> 30 -> 40
	struct Demo* temp1 = NULL;
	struct Demo* temp2 = NULL;
	while(head!=NULL) {
		temp2 = head -> next;
		head->next = temp1;
		temp1 = head;
		head = temp2;
	}
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
