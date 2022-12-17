#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
	int data;
	struct Node* next;
}node;
node* head = NULL;
int top = -1;
int size;
node* createNode() {
	node* newnode = (node*)malloc(sizeof(node));
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	newnode -> next = NULL;
	return newnode;
}
int push() {
	if(top == size - 1) {
		printf("Stack Overflow\n");
		return -1;
	}else {
		node* newnode = createNode();
		if(head == NULL) {
			head  = newnode;
		}else {
			newnode->next = head;
			head = newnode;
		}
		top++;
		return 0;
	}
}
int pop() {
	int ret;
	if(top == -1) {
		printf("Stack UnderFlow\n");
		return -1;
	}else {
		if(head==NULL) {
			free(head);
			head = NULL;
		}else {
			node* temp = head;
			head = head->next;
			ret = temp->data;
			free(temp);
		}
		top--;
		return ret;
	}
}
int peek() {
	if(top == -1) {
		printf("Stack is Empty\n");
		return -1;
	}else {
		printf("%d\n",head->data);
		return head->data;
	}
}
void main() {
	printf("Enter Size of stack\n");
	scanf("%d",&size);
	
	char ch;
	do {
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peek\n");
		int choice;
		printf("Enter choice\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				push();
				break;
			case 2:
				{
				if(top == -1)  {
					printf("stack is empty\n");
					break;
				}
				printf("%d popped\n",pop());
				}
				break;
			case 3:
				peek();
				break;
			default:
				printf("INVALID CHOICE\n");
				break;
		}
		getchar();
		printf("Do you want to continue\n");
		scanf("%c",&ch);
	}while(ch == 'y' || ch == 'Y');
}

