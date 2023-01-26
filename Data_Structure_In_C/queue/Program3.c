//implimenting queue using circular LinkedList
#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
}node;
int size;
struct Node* front = NULL;
struct Node* rear = NULL;
int flag=1;
int count= 1;
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
		if(count<size) {
			struct Node* newnode = createNode();
			if(front == NULL || rear == NULL) {
				front = newnode;
				rear = newnode;
			}else if(front->next == front){
				rear->next = newnode;
				rear = newnode;
				newnode->next = front;
				count++;
			}else {
				rear-> next = newnode;
				newnode->next = front;
				rear = newnode;
				count++;
			}
			return 0;
		}else {
			return -1;
		}	
}
int dequeue() {
	if(count!=0) {
		if(front==NULL) {
			flag = 0;
			return -1;
		}else {
			flag =1;
			int val = front->data;
			if(front->next == front) {
				front = NULL;
				rear = NULL;
				free(front);
				return val;
			}else {
				rear->next = front->next;
				free(front);
				front = rear->next;
				count--;
			}
			return val;
		}
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
		while(temp->next!=front) {
			printf("|%d|",temp->data);
			temp=temp->next;
		}
		printf("|%d|",temp->data);
	}
}
void main() {
	char choice;
	printf("Enter Size\n");
	scanf("%d",&size);
	do {
		printf("Enter your choice\n");
		printf("1.Enqueue\n");
		printf("2.dequeue\n");
		printf("3.front\n");
		printf("4.Print queue\n");
		printf("Enter your choice\n");
	
		int ch,data;
		scanf("%d",&ch);

		switch(ch) {
			case 1:
				{
					int ret = enqueue(data);
					
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
