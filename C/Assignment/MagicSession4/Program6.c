#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Festivals
{
	int data;
	struct Festivals *next;
}ft;
ft *head=NULL;
int sum=0,i=0,n;
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
	if(i==0 || i==n-1)
		sum = sum + newnode->data; 
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
	printf("Enter how many nodes you want\n");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		addNode();
	}
	printLL();
	printf("Sum of data of 1st and last node is : %d",sum);
	printf("\n");
}

