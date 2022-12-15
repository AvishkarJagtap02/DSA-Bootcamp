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
	}else {
		struct Demo* temp = head;
		while(temp->next !=NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;
	}
}
void addFirst() {
	struct Demo* newnode = createNode();
	if(head == NULL) {
		head = newnode;
	}else {

	newnode->next = head;
	head->prev = newnode;
	head=newnode;
	}
}
int countNodes() {		
	struct Demo* temp = head;
	int count=0;
	while(temp!=NULL) {
		count++;
		temp=temp->next;
	}
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
void ReverseLL() {
	Demo* temp1 = head;
	Demo* temp2 = head;
	while(temp2->next!=NULL) {
		temp2 = temp2 -> next;
	}
	int count = countNodes();
	int cnt = count/2;
	while(cnt) {
		int temp;
		temp = temp1->data;
       		temp1->data = temp2->data;
		temp2->data = temp;
		temp1=temp1->next;
		temp2=temp2->prev;
		cnt--;
	}
}	

void main() {
	int n;
	printf("Enter No of Nodes You Want\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		addNode();
	}
	ReverseLL();
	printLL();
}
