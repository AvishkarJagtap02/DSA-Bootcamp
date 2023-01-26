//implimenting queue using array
#include<stdio.h>
int size = 0,front = -1,rear = -1,flag=1;
int enqueue(int arr[]) {
	if(rear == size-1) {
		return -1;
	}else {
		if(front==-1 || rear == -1) {
			front++;
		}
		rear++;
		printf("Enter Data\n");
		scanf("%d",&arr[rear]);
		return 0;
	}
}
int dequeue(int arr[]) {
	if(rear == -1 || front>rear) {
		flag = 0;
		return -1;
	}else if(rear == front){
		int val = arr[front];
		front = -1;
		rear = -1;
		return val;
	}else {
		flag = 1;
		return arr[front++];
	}
}
int frontt(int arr[]) {
	if(front==-1) {
		return -1;
	}else {
		return arr[front];
	}
}
int printQueue(int arr[]) {
	if(front == -1) {
		printf("queue is empty\n");
	}else {
		for(int i=front;i<=rear;i++) {
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
}
void main() {
	printf("Enter Size\n");
	scanf("%d",&size);
	int arr[size];
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
					int ret = enqueue(arr);
					if(ret == -1) {
						printf("queue is FULL\n");
					}
				}
				break;
			case 2:
				{
					int ret = dequeue(arr);
					if(flag == 0) {
						printf("queue Underflow\n");
					}else {
						printf("%d dequeued\n",ret);
					}
				}
				break;
			case 3:
				{
					int ret = frontt(arr);
					if(ret==-1) {
						printf("Stack is Empty\n");
					}else {
						printf("Front = %d\n",ret);
					}
				}
				break;
			case 4:
				{
					printQueue(arr);
					

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
