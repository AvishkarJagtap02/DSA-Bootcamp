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
void sameLengthString() {
	int len;
	 printf("Enter length\n");
	 scanf("%d",&len);
	 printf("Enter length\n");
	Demo* temp = head;
	while(temp != NULL) {
		int count = mystrlen(temp->name);
		if(count == len) {
			puts(temp->name);
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
	// printf("Enter length\n");
	 //scanf("%d",&num);
	 sameLengthString(num);
	 printf("The End");
}
