//Reverse singly LinkedList
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
		newnode->next = NULL;
	}else {
		struct Demo* temp = head;
		while(temp->next !=NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
		newnode -> prev = temp;
	}
}
void addFirst() {
	struct Demo* newnode = createNode();
	if(head == NULL) {
		head = newnode;
	}else {
		head->prev = newnode;
		newnode->next = head;
		newnode->prev = NULL;
		head = newnode;
	}
}
/*
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
*/
void printLL() {
	struct Demo* temp = head;
	while(temp->next!=NULL) {
		printf("| %d |->",temp->data);
		temp=temp->next;
	}
	printf("|%d|",temp->data);
	printf("\n");
}
int ReverseLL() {
	if(head == NULL) {
		printf("List is empty\n");
		return -1;
	}else {
		struct Demo* temp = NULL;
		while(head!=NULL) {
			head->prev = head->next;
			head->next=temp;
			if(head->prev==NULL)  
				break;		
			head = head->prev;
			temp = head->prev;	
		}
	}
}	

int main() {
	int n;
	printf("Enter No of Nodes You Want\n");
	scanf("%d",&n);
	if(n==0 || n<0) {
		printf("Invalid!!\n");
		return -1;
	}
	for(int i=1;i<=n;i++) {
		addNode();
	}
	ReverseLL();
	printLL();
}
