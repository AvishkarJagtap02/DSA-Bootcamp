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
	printf("Enter Data\n");
	getchar();
	scanf("%[^\n]",newnode->name);
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
char* strRev(char* str) {
	char *temp = str;
	char*temp1 = str;
	while(*temp!='\0') {
		temp++;
	}
	temp--;
	char x ;
	while(str<temp) {
		char x = *str;
		*str = *temp;
		*temp = x;
		str++;
		temp--;
	}
	return temp1;
}
void mystrrev() {
	Demo* temp = head;
	while(temp->next!=NULL) {
		//strRev(temp->name);
		printf("|%s|->",strRev(temp->name));
		temp=temp->next;
	}
	printf("|%s|\n",strRev(temp->name));

}
void printLL() {
	Demo* temp = head;
	while(temp->next!=NULL) {
		printf("|%s|->",temp->name);
		temp=temp->next;
	}
	printf("|%s|\n",temp->name);

}
void main() {
	 int n,num=0;
	 printf("Enter Number of Nodes you want\n");
	 scanf("%d",&n);
	 for(int i=1;i<=n;i++) {
		addNode();
	 }
	 mystrrev();
	 printLL();
	 printf("The End\n");
}
