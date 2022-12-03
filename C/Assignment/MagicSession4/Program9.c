#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
typedef struct Festivals
{
	int data;
	struct Festivals *next;
}ft;
ft *head=NULL;
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
	getchar();
}
void printLL() {
	ft* temp = head;
	while(temp!=NULL) {
		printf("Data : %d ",temp->data);
		temp = temp->next;
	}
}
int isPrime(int n) {
	int count = 0,flag=1;
	for(int i=2;i<n/2;i++) {
		if(n%i==0) {
			flag=0;
		}
	}
	return flag;
}
void primeNumbers() {
	ft* temp = head;
	while(temp!=NULL) {
		if(isPrime(temp->data)) {
			printf("%d ",temp->data);
		}	
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
	primeNumbers();
	printf("\n");
}

