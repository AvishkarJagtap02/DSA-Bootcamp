//Doubly  Circular LinkedList
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
	newnode->next=NULL;
	newnode->next=NULL;
	return newnode;
}
int countNodes() {		
	struct Demo* temp = head;
	int count=1;
	while(temp->next!=head) {
		count++;
		temp=temp->next;
	}
	count++;
	return count;
}
void addFirst() {
	struct Demo* newnode = createNode();
	if(head == NULL) {
		head = newnode;
		newnode->next = head;
		newnode->prev = head;
	}else {
		newnode->next = head;
		newnode->prev = head -> prev;
		head->prev = newnode;
		newnode->prev->next = newnode;
		head = newnode;
	}
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
int addAtPos() {
	int pos;
	printf("Enter position\n");
	scanf("%d",&pos);
	int count = countNodes();
	if(pos<1 || pos > count+1) {
		printf("Invalid Pos\n");
		return -1;
	}else if(pos == 1) {
		addFirst();

	}else if(pos == count) {			
		addNode();					
	}else {
		Demo* newnode = createNode();
		Demo *temp = head;
		while(pos-2) {
			temp = temp -> next;
			pos--;
		}
		newnode->next = temp->next;
		temp->next->prev = newnode;
		temp->next = newnode;
		newnode->prev = temp;
	}
}
int deleteFirst() {
	if(head == NULL) {
		printf("List is Empty\n");
		return -1;
	}
	else if(head -> next == head) {
		free(head);
		head = NULL;
	}else {
		head->prev->next = head->next;
		head->next->prev = head->prev;
		free(head);
		head = head->next;
	}
}
int deleteLast() {
 	if(head == NULL) {
		printf("List is empty\n");
		return -1;
	}else if(head -> next == head) {
		free(head);
		head = NULL;
	}else {
		Demo* temp = head;
		while(temp->next->next!=head) {
			temp = temp->next;
		}
		free(temp->next);
		temp->next = head;
		head->prev = temp;
	}
}
int deleteAtPos() {
	int pos;
	printf("Enter Position\n");
	scanf("%d",&pos);
	if(pos<1 || pos > countNodes()) {
		printf("Invalid position\n");
		return -1;
	}else if(pos == 1){
		deleteFirst();
	}else if(pos == countNodes()) {
		deleteLast();
	}else {
		Demo* temp = head;
		while(pos-2) {
			pos--;
			temp = temp->next;
		}
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
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
void main() {
	char ch;
	printf("For Menu Type Y / y\n");
	scanf("%c",&ch);
	do {
		int ch;
		printf("Enter Your choice\n1.addNode\n2.addFirst\n3.addAtPos\n4.countNodes\n5.printLL\n6.deleteFirst\n7.deleteLast\n8.deleteAtPos\n9.exit\n");
		scanf("%d",&ch);
		switch(ch) {
			case 1:
				addNode();
				break;
			case 2:
				addFirst();
				break;
			case 3:
				addAtPos();
				break;
			case 4:
				printf("Count : %d\n",countNodes());
				break;
			case 5:
				printLL();
				break;
			case 6:
				deleteFirst();
				break;
			case 7:
				deleteLast();
				break;
			case 8:
				deleteAtPos();
				break;
			case 9:
				{
				printf("Thank You!!!\n");
				exit(0);
				break;
				}
			default: 
				printf("Invalid choice\n");
				break;
		}
	}while(	ch == 'y' || ch == 'Y');
}
	























