#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Demo {
	struct Demo* prev;
	char name[20];
	struct Demo* next;
}Demo;
Demo* head = NULL;
Demo* createNode() {
	Demo* newnode = (Demo*)malloc(sizeof(Demo));
	printf("Enter Data\n");
	getchar();
	scanf("%[^\n]",newnode->name);
	newnode->next=NULL;
	newnode->prev = NULL;
	return newnode;
}
int addNode() {
	Demo* newnode = createNode();
	if(head == NULL) {
		head= newnode;
	}else {
		Demo* temp = head;
		while(temp->next!=NULL) {
			temp = temp-> next;
		}
		temp -> next = newnode;
		newnode->next = NULL;
		newnode->prev = temp;
	}
	return 0;
}
int mystrlen(char* str) {
	int count=0;
	while(*str!='\0') {
		count++;
		str++;
	}
	return count;
}
int countNodes() {
	Demo* temp = head;
	int count=1;
	while(temp!=NULL) {
		count++;
		temp=temp->next;
	}
	return count;
}
void deleteFirst() {
	Demo* temp = head;
	if(head == NULL) {
		printf("List is Empty\n");
	}else {
		head =head->next; 
		free(head->prev);
		head->prev = NULL;
	}
}
void deleteLast() {
	if(head == NULL) {
		printf("List is Empty\n");
	}else if(countNodes() == 1){
		deleteFirst();
	}else {
		Demo* temp = head;
		while(temp->next->next!=NULL) { 
			temp = temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
}
	
void deleteAtpos(int pos) {
	Demo* temp = head;
	if(head==NULL) {
		printf("List is empty\n");
	}else if(pos == 1) {
		deleteFirst();
	}else if(pos == countNodes()) {
		deleteLast();
	}
	else {
		while(pos-2) {
			temp=temp->next;
			pos--;
		}
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
	}
}
void printLL() {
	Demo* temp = head;
	while(temp->next!=NULL) {
		printf("|%s|->",temp->name);
		temp=temp->next;
	}
	printf("|%s|",temp->name);
}

void sameLengthString() {
	int pos=1;
	Demo *temp = head;
	int length;
	printf("Enter length\n");
	scanf("%d",&length);

	while(temp!=NULL) {
		if(length != mystrlen(temp->name)) {
			deleteAtpos(pos);
			pos--;
		}
		pos++;
		temp = temp -> next;
	}
	printLL();
}
void main() {
	 int n,num=0;
	 printf("Enter Number of Nodes you want\n");
	 scanf("%d",&n);
	 for(int i=1;i<=n;i++) {
		addNode();
	 }
	 sameLengthString();
	 printLL();
}
