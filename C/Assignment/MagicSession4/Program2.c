#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct States {
	char sName[20];
	int population;
	float budget;
	float lit;
	struct States *next;
}st;
st *head=NULL;
void addNode() {
	st* newnode = (st*)malloc(sizeof(st));
	printf("Enter Name of state\n");
	if(fgets(newnode->sName,15,stdin)!=NULL) {
		newnode->sName[strcspn(newnode->sName,"\n")] = '\0';
	}
	printf("Enter population\n");
	scanf("%d",&newnode->population);
	printf("Enter budget\n");
	scanf("%f",&newnode->budget);
	printf("Enter lit\n");
	scanf("%f",&newnode->lit);
	newnode->next = NULL;
	if(head == NULL) {
		head = newnode;
	}else {
		st* temp = head;
		while(temp->next!=NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
	}
	getchar();
}
void printLL() {
	st* temp = head;
	while(temp!=NULL) {
		printf("State ->  %s",temp->sName);
		printf(" population ->%d ",temp->population);
		printf("budget ->%f",temp->budget);
		printf("litracy -> %f ||",temp->lit);
		temp = temp->next;
	}
}

void main() {
	addNode();
	addNode();
	addNode();
	addNode();
	printLL();
}

