// Reverse Doubly LinkedList
#include<stdio.h>
#include<stdlib.h>
typedef struct Demo {
	struct Demo* prev;
	int data;
	struct Demo* next;
}Demo;
struct Demo* head =NULL;
struct Demo* createNode() {
	struct Demo* newnode = (struct Demo*)malloc(sizeof(struct Demo));   
	printf("Enter Node\n");
	scanf("%d",&newnode->data);
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}
					
void addNode() {					
	struct Demo* newnode = createNode();
	if(head==NULL) {
		head = newnode;
		newnode->next = head;
		newnode->prev = head;
	}else {
		struct Demo* temp = head;
		while(temp->next !=head) {
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = head;
		newnode->prev = temp;
		head -> prev = newnode;
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
struct Demo* reverseDLL() {	
	if(!head) {
		return head;
	}
	struct Demo* temp = NULL;
	struct Demo* last = head->prev;
	struct Demo* curr = last;
	while(curr->prev != last)
		prev = curr->prev;
}
void main() {
	int n;
	printf("Enter the No of nodes\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		addNode();
	}
	printLL();
	reverseDLL();
	printLL();
}

