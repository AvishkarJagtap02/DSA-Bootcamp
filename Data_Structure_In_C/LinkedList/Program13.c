#include<stdio.h>
#include<stdlib.h>
struct Demo {
	int data;
	struct Demo *next;
};
struct Demo* head = NULL;
struct Demo* createNode() {
	struct Demo* newnode = (struct Demo*)malloc(sizeof(struct Demo));
        printf("Enter Node\n");
        scanf("%d",&newnode->data);
  	newnode->next = NULL;
	return newnode;
}	
void addNode() {
	struct Demo *newnode = createNode();
	if(head==NULL) {
		head = newnode;
	}else {
		struct Demo *temp = head;
		while(temp->next!=NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void addFirst() {
	struct Demo* newnode = createNode();
	if(head==NULL) {
		head = newnode;
	}else {
		newnode->next = head;
		head = newnode;
	}
}
void addAtPos(int pos) {
	struct Demo* newnode = createNode();
	struct Demo* temp = head;
	while(pos-2) {
		temp = temp->next;
		pos--;
	}
	newnode->next = temp->next;
	temp->next = newnode;
}
void countNodes() {
	struct Demo* temp = head;
	int count = 0;
	while(temp!=NULL) {
		temp=temp->next;
		count++;
	}
	printf("\nCount of Nodes = %d\n",count);
}
void printLL() {
	struct Demo* temp = head;
	while(temp!=NULL) {
		printf("|%d| ",temp->data);
		temp=temp->next;
	}
}

void main() {
	int n;
	printf("Enter Number of nodes you want\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		addNode();
	}
	addFirst();
	printLL();
	int pos=0;
	printf("\nEnter Position to insert node\n");
	scanf("%d",&pos);
	addAtPos(pos);
	printLL();
	countNodes();
}
