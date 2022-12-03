#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Mall {
	char mName[20];
	int shops;
	float rev;
	struct Mall *next;
}ml;
ml *head=NULL;
void addNode() {
	ml* newnode = (ml*)malloc(sizeof(ml));
	printf("Enter Name of Mall\n");
	if(fgets(newnode->mName,15,stdin)!=NULL) {
		newnode->mName[strcspn(newnode->mName,"\n")] = '\0';
	}
	printf("Enter no of shops\n");
	scanf("%d",&newnode->shops);
	printf("Enter revenue\n");
	scanf("%f",&newnode->rev);
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
		printf("Mall Name -> %s",temp->mName);
		printf(" no of shops -> %d",temp->shops);
		printf("revenue -> %f ||",temp->rev);
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

