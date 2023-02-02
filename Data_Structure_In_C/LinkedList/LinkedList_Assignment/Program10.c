//program to add nodes whose addition of digits is even 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Demo {
	int data;
	struct Demo *next;
};
struct Demo* head1 = NULL;
struct Demo* head2 = NULL;
struct Demo* createNode() {
	struct Demo* newnode = (struct Demo*)malloc(sizeof(struct Demo));
        printf("Enter Node\n");
        scanf("%d",&newnode->data);
  	newnode->next = NULL;
	return newnode;
}	
void addNode(struct Demo** head) {
	struct Demo *newnode = createNode();
	if(*head==NULL) {
		*head = newnode;
		newnode->next = NULL;
	}else {
		struct Demo *temp = *head;
		while(temp->next!=NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = NULL;
	}
}
void printLL(struct Demo* head) {
	if(head==NULL) {
		printf("NULL\n");
	}else {
		printf("\n");
		struct Demo* temp = head;
		while(temp->next!=NULL) {
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
		printf("|%d|->NULL",temp->data);
		printf("\n\n");
	}
}
int countNodes() {
	int count = 0;
	struct Demo* temp = head1;
	while(temp!=NULL) {
		temp=temp->next;
		count++;
	}return count;
}																				
struct Demo* create_Node(int val) {
	struct Demo* newnode = (struct Demo*)malloc(sizeof(struct Demo));
	newnode->data = val;
	newnode->next = NULL;
	return newnode;
}
struct Demo* copyNode(int n) {										//11->12->13->14->15->16->17
													//11->13->15->17
	struct Demo* temp1 = head1;
	struct Demo* temp2 = head2;
	
	struct Demo* newnode = create_Node(n);
	if(head2 == NULL) {
		head2 = newnode;
		temp2 = head2;
		newnode -> next = NULL;
	}else {
		temp2->next =  newnode;
		temp2 = temp2->next;
		newnode->next = NULL;
	}
}
bool checkEven(int n) {
	int sum = 0,temp = n,rem=0;
	while(n!=0) {
		rem = n%10;
		sum = sum + rem;
		n=n/10;
	}if(sum %2 == 0) {
		return true;
	}else {
		return false;
	}
}
void copyEvenLL() {									// 0  1   2   3   4   5   6
	struct Demo* temp1 = head1;							//10->11->12->13->14->15->16
		while(temp1!=NULL) {
			if(checkEven(temp1->data)) {
					copyNode(temp1->data);
					temp1=temp1->next;
			}else {
				printf("skipping ");
				temp1=temp1->next;
			}
		}			
		printf("\n\n====================================================\n");
		printf("Source List: \n");
		printLL(head1);
		printf("====================================================\n");
		printf("Destination List: \n");
		printLL(head2);
		printf("====================================================\n\n");
}		
void main() {
	int n;
	do {
		printf("1. Add Data In List1\n");
		printf("2. print List1\n");
		printf("3. print List2\n");
		printf("4. copy Lists\n");
		printf("5. exit\n");
		printf("\n\nSelect Option\n");
		scanf("%d",&n);
		switch(n) {
			case 1:
				addNode(&head1);
				break;
			case 2:
				printLL(head1);
				break;
			case 3:
				printLL(head2);
				break;
			case 4:
				{
				if(head1 == NULL && head2 == NULL) {
					printf("\n\n====================================================\n");
					printf("Source List: \n");
					printLL(head1);
					printf("====================================================\n");
					printf("Destination List: \n");
					printLL(head2);
					printf("====================================================\n\n");
					break;
				}			
				copyEvenLL();
			       }
				break;
			case 5:
				exit(0);
			default:
				break;
		}
	}while(n!=0);
}
