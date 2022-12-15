//singly  Circular LinkedList
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
	}else {
		Demo* temp = head;
		while(temp->next!=head) {
			temp = temp -> next;
		}
		temp->next = newnode;
		newnode->next = head;
		head = newnode;
	}
}							//head
void addNode() {					//10 -> 20 -> 30-> 40
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
int addAtPos() {
	int pos;
	printf("Enter position\n");
	scanf("%d",&pos);
	int count = countNodes();
	if(pos<1 || pos > countNodes()+1) {
		printf("Invalid Pos\n");
		return -1;
	}else if(pos == 1) {
		addFirst();

	}else if(pos == count) {			//10 -> 20 -> 30-> 40
		addNode();					// 25
	}else {
		Demo* newnode = createNode();
		Demo *temp = head;
		while(pos-2) {
			temp = temp -> next;
			pos--;
		}
		newnode->next = temp->next;
		temp->next = newnode;
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
		Demo *temp = head;
		while(temp->next!=head) {
			temp = temp->next;
		}
		head = head->next;
		free(temp->next);
		temp->next = head;
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
		Demo* temp1 = head;
		Demo* temp2 = head;
		while(pos-2) {
			pos--;
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next = temp2->next;
		free(temp2);
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
	int n;
	printf("Enter No of Nodes You Want\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		addNode();
	}
	printf("Data to insert at First\n");
	addFirst();
	printLL();
	printf("Data to insert at Last\n");
	addNode();
	printLL();
	addAtPos();
	printLL();
	printf("Node added sucessfully\n");
	deleteFirst();
	printf("First Node deleted sucessfully\n");
	printLL();
	deleteLast();
	printf("Last Node deleted sucessfully\n");
	printLL();
	deleteAtPos();
	printf("Node deleted sucessfully\n");
}
