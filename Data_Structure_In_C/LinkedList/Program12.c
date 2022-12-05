#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Employee {
	char eName[20];
	int id;
	struct Employee *next;
}Emp;
Emp*head = NULL;
Emp* createNode() {
	Emp *newnode = (Emp*)malloc(sizeof(Emp));
	printf("Enter name of Employee\n");
	getchar();
	char ch;
	int i=0;
	while((ch = getchar())!= '\n') {
		(*newnode).eName[i]=ch;
		i++;
	}
	printf("Enter Employee id\n");
	scanf("%d",&newnode->id);
	newnode->next = NULL;
	return newnode;
}
void addNode() {
	Emp *newnode=createNode();
	if(head == NULL) {
		head = newnode;
	}else {
		Emp *temp = head;
		while(temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void addFirst() {
	Emp *newnode = createNode();

	if(head == NULL) {
		head = newnode;
	}else {
		newnode->next = head;
		head = newnode;
	}
}
void printLL() {
	Emp *temp = head;
	while(temp!=NULL) {
		printf("%s ->",temp -> eName);
		printf("%d ||",temp -> id);
		temp = temp->next;
	}
}
void countNode() {
	Emp *temp = head;
	int count = 0;
	while(temp!=NULL) {
		count++;
		temp=temp->next;
	}
	printf("count = %d\n",count);
}
void addAtPos(int pos) {
	Emp *temp = head;
	Emp *newnode = createNode();
	while(pos-2) {
		temp=temp->next;
		pos--;
	}
	newnode->next = temp->next;
	temp->next = newnode;
}
		
void main() {
	int n;
	printf("Enter No of Nodes you want to enter\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		addNode();
	}
	addFirst();
	printLL();
	int pos;
	printf("Enter position\n");
	scanf("%d",&pos);
	addAtPos(pos);
	printLL();
	countNode();
}
