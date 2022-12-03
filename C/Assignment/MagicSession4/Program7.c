#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Festivals
{
	int data;
	struct Festivals *next;
}ft;
ft *head=NULL;
int max=0;
void addNode() {
	ft* newnode = (ft*)malloc(sizeof(ft));
	printf("Enter int data\n");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	if(head == NULL) {
		head = newnode;
	}else {
		ft* temp = head;
		while(temp->next!=NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
	}
	if(newnode->data>max) 
		max = newnode->data; 
	getchar();
}
void printLL() {
	ft* temp = head;
	while(temp!=NULL) {
		printf("Data : %d ",temp->data);
		temp = temp->next;
	}
}

void main() {
	int n;
	printf("Enter how many nodes you want\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		addNode();
	}
	printLL();
	printf("Sum Maximum number of LinkedList is : %d",max);
	printf("\n");
}

