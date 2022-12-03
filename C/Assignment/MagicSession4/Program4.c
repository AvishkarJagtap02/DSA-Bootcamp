#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Festivals
{
	char fName[20];
	int duration;
	char purpose[20];
	struct Festivals *next;
}ft;
ft *head=NULL;
int count= 0;
void addNode() {
	ft* newnode = (ft*)malloc(sizeof(ft));
	printf("Enter Name of Festival\n");
	if(fgets(newnode->fName,15,stdin)!=NULL) {
		newnode->fName[strcspn(newnode->fName,"\n")] = '\0';
	}
	
	printf("Festival known for \n");
	if(fgets(newnode->purpose,15,stdin)!=NULL) {
		newnode->purpose[strcspn(newnode->purpose,"\n")] = '\0';
	}
	
	printf("Enter duration\n");
	scanf("%d",&newnode->duration);
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
		printf("Festival Name ->  %s",temp->fName);
		printf(" Duration ->%d ",temp->duration);
		printf("Festival purpose ->  %s",temp->purpose);

		temp = temp->next;
	}
}
int countNode() {
	ft* temp = head;
	while(temp!=NULL) {
		count++;
		temp = temp->next;
	}
	return count;
}

void main() {
	addNode();
	addNode();
	addNode();
	addNode();
	printLL();
	printf("\nCount of nodes is %d ", countNode());
	printf("\n");
}

