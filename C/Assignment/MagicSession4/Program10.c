#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct PcGame {
	char gName[20];
	int levels;
	float size;
	struct PcGame *next;
}ml;
ml *head=NULL;
void addNode() {
	ml* newnode = (ml*)malloc(sizeof(ml));
	printf("Enter Name of Game\n");
	if(fgets(newnode->gName,15,stdin)!=NULL) {
		newnode->gName[strcspn(newnode->gName,"\n")] = '\0';
	}
	printf("Enter no of Levels\n");
	scanf("%d",&newnode->levels);
	printf("Enter size\n");
	scanf("%f",&newnode->size);
	newnode->next = NULL;
	if(head == NULL) {
		head = newnode;
	}else {
		ml* temp = head;
		while(temp->next!=NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
	}
	getchar();
}
void printLL() {
	ml* temp = head;
	while(temp!=NULL) {
		printf("Game Name -> %s",temp->gName);
		printf(" no of Levels -> %d",temp->levels);
		printf("size -> %f ||",temp->size);
		temp = temp->next;
	}
}

void main() {
	addNode();
	addNode();
	addNode();
	addNode();
	printLL();
	printf("\n");
}

