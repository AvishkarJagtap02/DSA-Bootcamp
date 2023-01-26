//LinkedList Sorting
#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
	int data;
	struct Node* next;
}node;
node* head = NULL;
int n;
struct Node* createNode() {
	node* newnode = (node*)malloc(sizeof(node));
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	return newnode;
}
int countNodes() {
	node* temp = head;
	int count=1;
	while(temp!=NULL) {
		temp = temp->next;
		count++;
	}
	return count;
}
void addFirst(node* newnode) {
	if(head == NULL) {
		head = newnode;
		newnode->next = NULL;
	}else {
		newnode->next = head;
		head = newnode;
	}
}
void addAtPos(int pos,node* newnode) {
	if(pos <= 0 || pos > countNodes()+1) {
		printf("Invalid Position\n");
	}else {
		if(pos == 1) {
			addFirst(newnode);
		}else if(pos == countNodes()+1) {
			node* tmp = head;
			while(tmp->next!=NULL) {
				tmp = tmp->next;
			}
			tmp->next = newnode;
			newnode->next = NULL;
		}else {
			node* temp = head;
			while(pos-2) {
				temp = temp->next;
				pos--;
			}
			newnode->next = temp->next;
			temp->next = newnode;
		}
	}
}
void addNode() {
	node* newnode = createNode();
	int pos = 1;
	if(head==NULL) {
		addFirst(newnode);
	}else {
		node* temp = head;
		while(temp!=NULL) {
			if(temp->data <= newnode->data) {
				temp = temp->next;
				pos++;
			}else {
				break;
			}
		}
		addAtPos(pos,newnode);
	}
}
void deleteFirst() {
	if(head ==NULL) {
		printf("List is Empty\n");
	}else {
		if(head->next == NULL) {
			free(head);
			head = NULL;
		}else {
			node* temp = head;
			head = head->next;
			free(temp);
		}
	}
}
void printLL() {
	node* temp = head;
	while(temp -> next !=NULL) {
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|",temp->data);
}
void main() {
	int n;
	char choice;
	printf("1.addNode\n");
	printf("2.deleteNode\n");
	printf("3.printLL\n");
	printf("4.exit\n");
	do {
		int ch;
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch) {
			case 1:	
				addNode();
				break;
			case 2:
				deleteFirst();
				break;
			case 3:
				printLL();
				break;
			case 4:
				printf("bye!!!\n");
			        exit(0);	
			       	
			default:
				printf("Invalid choice!!!\n");
				break;
		}
		getchar();
		printf("Do you want to continue? -> press Y\n");
		scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');
}
