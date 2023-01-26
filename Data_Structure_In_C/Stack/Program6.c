//implimenting Array using two stacks
#include<stdio.h>
#include<stdlib.h>
int size;
int top1=0,top2=0;
int flag3=0;
int flag1=0,flag2=0;
int push(int stack[]) {
	if(top1  == top2 - 1) {
		return -1;
	}else {
		if(flag3 == 0) {
			top1++;
			printf("Enter Data\n");
			scanf("%d",&stack[top1]);
		}else {
			top2--;
			printf("Enter Data\n");
			scanf("%d",&stack[top2]);
		}
		return 0;							
	}									
}										
int pop1(int arr[]) {
	if(top1 == -1) {
		flag1=0;
		printf("Stack UnderFlow\n");
		return -1;
	}else 	{
		flag1=1;
		return arr[top1--];
	}
}
int pop2(int arr[]) {
	if(top2 == size) {
		flag2=0;
		return -1;
	}else {
		flag2=1;
		return arr[top2++];
	}
}
void printStack(int arr[]) {
	printf("\n----------------------------------------------------------------------------------\n");
	if(top1 == -1) {
		printf("Stack is empty\n");
	}else {
		printf("stack 1 is :\n");

		for(int i=top1;i>-1;i--) {
			printf("||%-4d||",arr[i]);
			
			if(i== top1) {
				printf("\t<--top");
			}
			printf("\n");
		}
		printf("--------\n");
	}
	if(top2 == size) {
		printf("stack 2 is empty\n");
	}else {
		printf("stack 2 is : \n ");
		for(int i=top2;i<size;i++) {
			printf("||%-4d||",arr[i]);
			
			if(i== top2) {
				printf("\t<--top");
			}
			printf("\n");
		}
		printf("--------\n");
	}
	printf("\n----------------------------------------------------------------------------------\n");
}
void main() {
	printf("Enter Size of stack\n");
	scanf("%d",&size);
	top1=-1;
	top2 = size;
	int arr[size];
	int choice;
	while(1) {
		printf("1.Push1\n");
		printf("2.Push2\n");
		printf("3.Pop1\n");
		printf("4.Pop2\n");
		printf("5.Exit\n");
		printf("Enter choice\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				{
					flag3 = 0;
					int ret = push(arr);
					if(ret == -1) {
						printf("Stack overflow 1 \n");
					}
					printStack(arr);
				}
				break;
			case 2:
				{
					flag3 = 1;
					int ret = push(arr);
					if(ret == -1) {
						printf("Stack Overflow 2\n");
					}
					printStack(arr);
				}
				break;
			case 3:
				{
					int ret = pop1(arr);
					if(flag1 == 0)  {
						printf("stack Underflow1\n");
					}
					else {
						printf("%d popped\n",ret);
					}
					printStack(arr);
				}
				break;
			case 4:
				{
					int ret = pop2(arr);
					if(flag2 == 0)  {
						printf("stack Underflow2\n");
					}else {
						printf("%d popped\n",ret);
					}
					printStack(arr);
				}
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("INVALID CHOICE\n");
				break;
		}
	}
}

