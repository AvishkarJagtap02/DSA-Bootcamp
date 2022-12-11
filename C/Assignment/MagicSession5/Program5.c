#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Demo {
	char name[20];
	struct Demo* next;
}Demo;
Demo* head = NULL;
Demo* createNode() {
	Demo* newnode = (Demo*)malloc(sizeof(Demo));
	//getchar();
	printf("Enter Data\n");
	getchar();
	//fgets(newnode->name,15,stdin);
	scanf("%[^\n]",newnode->name);
	//getchar();
	newnode->next=NULL;
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
	head = temp->next; 
	free(temp);
}
void deleteLast() {
	if(countNodes() == 1) {
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
	Demo* temp1 = head;
	Demo* temp2 = head;
	if(head==NULL) {
		printf("List is empty\n");
	}else if(pos == 1) {
		deleteFirst();
	}else if(pos == countNodes()) {
		deleteLast();
	}
	else {
		while(pos-2) {
			temp1=temp1->next;
			temp2=temp2->next;
			pos--;
		}
		temp2 = temp1->next;
		temp1->next = temp1->next->next;
		free(temp2->next);
	}
}
void printLL() {
	Demo* temp = head;
	while(temp->next!=NULL) {
		printf("|%s|->",temp->name);
		temp=temp->next;
	}
	printf("|%s|\n",temp->name);
}

void sameLengthString() {
	int len,cnt=1;
	 printf("Enter length\n");
	 scanf("%d",&len);
	 Demo* temp = head;
	while(temp != NULL) {
		int count = mystrlen(temp->name);
		if(count == len) {
			puts(temp->name);
			cnt++;
		}
		else {
			deleteAtpos(cnt);
			cnt--;
			//printf("Node deleted sucessfully\n");
		}
		temp=temp->next;
	}
}

void main() {
	 int n,num=0;
	 printf("Enter Number of Nodes you want\n");
	 scanf("%d",&n);
	 for(int i=1;i<=n;i++) {
		addNode();
	 }
	 sameLengthString();
	 //printLL();
	 printf("The End\n");
}
