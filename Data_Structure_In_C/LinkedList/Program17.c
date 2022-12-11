#include<stdio.h>
#include<stdlib.h>
struct Demo {
	struct Demo* prev;
	int data;
	struct Demo* next;
};
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
	while(temp->next!=NULL) {
		count++;
		temp=temp->next;
	}
	return count;
}
void deleteFirst() {
	int count = countNodes();
	if(head==NULL) {
		printf("List is Empty\n");
	}else if(count == 1) {
		free(head);
		head=NULL;
	}
	else {
		
		head = head->next;
		free(head->prev);
		head->prev = NULL;
	}
}
void deleteLast() {
	int count = countNodes();
	if(head == NULL) {
		printf("List is Empty\n");
	}else if(count == 1) {
		deleteFirst();
	}else {
		struct Demo* temp = head;
		while(temp->next->next!=NULL) {
			temp=temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}
void deleteAtPos(int pos) {
	int count = countNodes();
	if(pos<=0 || pos >=count+2) {
		printf("List is Empty\n");
	}else if(pos == 1) {
		deleteFirst();
	}else if(pos == count+1) {
		deleteLast();
	}else {
		struct Demo* temp1 = head;
		while(pos-2) {
			temp1 = temp1 -> next;
			pos--;
		}
		temp1->next = temp1->next->next;
		free(temp1->next->prev); 
	}
}
int addAtPos(int pos) {
	printf("Enter Position\n");
	scanf("%d",&pos);
	int count = countNodes();
	if(pos<=0 || pos>=count+2) {
		printf("Invalid Position\n");
		return -1;
	}else if(pos==count+1) {
		addNode();
	}else if(pos == 1) {
		addFirst();
	}
	else {
		struct Demo* newnode = createNode();
		struct Demo* temp = head;
		while(pos-2) {
			temp = temp->next;
			pos--;
		}
		newnode->next = temp->next;
		newnode->next->prev = newnode;
		temp->next = newnode;
	}
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
void main() {
	int n;
	printf("Enter No of Nodes You Want\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		addNode();
	}
	int pos=0;
	addFirst();
	printLL();
	addAtPos(pos);
	printLL();
	deleteFirst();
	printLL();
	deleteLast();
	printLL();
	deleteAtPos(pos);
	printLL();
}


