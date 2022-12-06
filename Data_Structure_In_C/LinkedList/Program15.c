#include<stdio.h>
#include<stdlib.h>
struct Demo {
	int data;
	struct Demo *next;
};
struct Demo* head = NULL;
struct Demo* createNode() {
	struct Demo* newnode = (struct Demo*)malloc(sizeof(struct Demo));
        printf("Enter Node\n");
        scanf("%d",&newnode->data);
  	newnode->next = NULL;
	return newnode;
}	
void addNode() {
	struct Demo *newnode = createNode();
	if(head==NULL) {
		head = newnode;
	}else {
		struct Demo *temp = head;
		while(temp->next!=NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void addFirst() {
	struct Demo* newnode = createNode();
	if(head==NULL) {
		head = newnode;
	}else {
		newnode->next = head;
		head = newnode;
	}
}
int countNodes() {
	struct Demo* temp = head;
	int count = 0 ;
	while(temp!=NULL) {
		temp=temp->next;
		count++;
	}
	printf("\nCount of Nodes = %d\n",count);
	return count;
}
void addAtPos(int pos) {
	int count = countNodes();
       	if(pos<=0 || pos>=count+2) {
		printf("Invalid Position\n");
	}
	else if(pos == count+1) {
		addNode();
	}else if(pos == 1) {
		addFirst();
	}else {
		struct Demo* newnode = createNode();
		struct Demo* temp = head;
		while(pos-2) {
			temp=temp->next;
			pos--;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}
}
void printLL() {
	struct Demo* temp = head;
	while(temp!=NULL) {
		printf("|%d| ",temp->data);
		temp=temp->next;
	}
}
void deleteFirst() {
	struct Demo *temp = head;
	head = temp->next;
	free(temp);
}
void deleteLast() {
	struct Demo *temp = head;
	while(temp->next->next!=NULL) {
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
}
int deleteAtPos(int pos) {
	int count = countNodes();
	if(pos<=0 || pos>count) {
		printf("Invalid Position\n");
		return -1;
	}else if(pos == count) {
		deleteLast();
	}else if(pos == 1) {
		deleteFirst();
	}else {
		struct Demo* newnode = createNode();
		struct Demo *temp1 = head;
		struct Demo *temp2 = head;
		while(pos-2) {
			temp1 = temp1->next;
			temp2 = temp2->next;
			pos--;
		}
		temp1=temp1->next;
		temp2=temp2->next->next;
		free(temp1->next);
	}
}
void main() {
	char ch;
	do{
		printf("1 : addNode\n");
		printf("2 : addfirst\n");
		printf("3 : adaAtPos\n");
		printf("4 : printLL\n");
		printf("5 : deleteFirst\n");
		printf("6 : deleteLast\n");
		printf("7 : deleteAtPos\n");
		int choice;
		printf("Enter Choice\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				addNode();
				break;
			case 2:
				addFirst();
				break;
			case 3:
			{
				int pos=0;
				printf("Enter Position\n");
				scanf("%d",&pos);
				addAtPos(pos);
			}
			break;
			case 4:
				printLL();
				break;
			case 5:
				deleteFirst();
				break;
			case 6:
				deleteLast();
				break;
			case 7:
			{	
				int pos=0;
				printf("Enter Position of node you want to delete\n");
				scanf("%d",&pos);	
				deleteAtPos(pos);
				break;
			}
			default:
				printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want to continue\n");
		scanf("%c",&ch);
	}while(ch == 'y' || ch == 'Y');

}
