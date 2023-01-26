//implimenting queue using LinkedList
#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
int size;
struct Node* front = NULL;
struct Node* rear = NULL;
int flag=1;
struct Node* createNode() {
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	if(newnode==NULL) {
		printf("Memory is Full\n");
		exit(0);
	}
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	return newnode;
}
int enqueue() {
	
	struct Node* newnode = createNode();
	if(front == NULL || rear == NULL) {
		front = newnode;
		rear = newnode;
	}else {
		rear->next = newnode;
		rear = newnode;
	}
	return 0;
}
int dequeue() {
	if(front==NULL) {
		flag = 0;
		rear = front;
		return -1;
	}else {
		flag = 1;
		struct Node* temp = front;
		int val = front->data;
		front = front->next;
		if(front == NULL) {
			rear = NULL;
		}
		free(temp);
		return val;
	}
}
int frontt() {
	if(front==NULL) {
		return -1;
	}else {
		return front->data;
	}
}
int printQueue() {
	if(front == NULL) {
		printf("queue is empty\n");
		return -1;
	}else {
		struct Node* temp = front;
		while(temp) {
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("NULL\n");
	}
}
void main() {
	//printf("Enter Size\n");
	//scanf("%d",&size);
	char choice;
	do {
		printf("1.Enqueue\n");
		printf("2.dequeue\n");
		printf("3.front\n");
		printf("4.Print queue\n");
	
		int ch;
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch) {
			case 1:
				{
					
					int ret = enqueue();
					if(ret == -1) {
						printf("queue is FULL\n");
					}
				}
				break;
			case 2:
				{
					int ret = dequeue();
					if(flag == 0) {
						printf("queue Underflow\n");
					}else {
						printf("%d dequeued\n",ret);
					}
				}
				break;
			case 3:
				{
					int ret = frontt();
					if(ret==-1) {
						printf("Stack is Empty\n");
					}else {
						printf("Front = %d\n",ret);
					}
				}
				break;
			case 4:
				{
					printQueue();
					

				}
				break;
			default:
				printf("Invalid choice\n");
				break;

		}getchar();
		printf("Do You Want to continue?\n");
		scanf("%c",&choice);
		}while(choice == 'y' || choice == 'Y');

}		
