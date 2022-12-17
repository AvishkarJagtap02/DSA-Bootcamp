#include<stdio.h>
#include<stdlib.h>
int top = -1;
int size = 0;
int push(int stack[]) {
	if(top == size - 1) {
		printf("Stack Overflow\n");
		return -1;
	}else {
		int data;
		printf("Enter Data\n");
		scanf("%d",&data);
		top++;
		stack[top] = data;
		return 0;
	}
}
int pop(int *stack) {
	if(top == -1) {
		printf("Stack UnderFlow\n");
		return -1;
	}else {
		int data = *(stack+top);
		top--;
		return data;
	}
}
int peek(int stack[]) {
	if(top == -1) {
		printf("Stack is Empty\n");
		return -1;
	}else {
		printf("%d\n",stack[top]);
		return stack[top];
	}
}
void main() {
	printf("Enter Size of stack\n");
	scanf("%d",&size);
	int stack[size];
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
				push(stack);
				break;
			case 2:
				{
				if(top == -1)  {
					printf("stack is empty\n");
					break;
				}
				printf("%d popped\n",pop(stack));
				}
				break;
			case 3:
				peek(stack);
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

