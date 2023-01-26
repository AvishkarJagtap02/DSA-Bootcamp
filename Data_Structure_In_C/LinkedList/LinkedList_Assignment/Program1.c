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
void Search_Occurrence() {
	int num;
	printf("Enter Number to search its occurrence\n");
	scanf("%d",&num);
	struct Demo* temp = head;
	int count = 0;
	while(temp!=NULL) {
		if(temp->data == num) {
			count++;
		}
		temp = temp -> next;
	}
	if(count == 0) {
		printf("%d Not Exist!!!\n",num);
	}else {
		printf("The occurrence of %d in Linked List is : %d\n",num,count);
	}
}
void printLL() {
	struct Demo* temp = head;
	while(temp!=NULL) {
		printf("|%d| ",temp->data);
		temp=temp->next;
	}
}
void main() {
	char ch;
	do{
		printf("1 : addNode\n");
		printf("2 : Search Occurrence\n");
		printf("4 : printLL\n");
		int choice;
		printf("Enter Choice\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				addNode();
				break;
			case 2:
				Search_Occurrence();
				break;
			case 3:
				printLL();
				break;
			default:
				printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want to continue\n");
		scanf("%c",&ch);
	}while(ch == 'y' || ch == 'Y');

}
