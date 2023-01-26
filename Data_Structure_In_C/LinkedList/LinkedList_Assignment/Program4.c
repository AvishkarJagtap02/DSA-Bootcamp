//add First N elements from LinkedList 1 to LinkedList2
#include<stdio.h>
#include<stdlib.h>
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
void concatNLL() {
	struct Demo* temp = head2;
	int num;
	printf("\nEnter Number of nodes to concat\n");
	scanf("%d",&num);
	if(num>=countNodes(head1)){
		if(head2 != NULL) {
			while(temp->next!=NULL) {
				temp = temp->next;
			}
			temp->next = head1;
			printf("\n\n====================================================\n");
			printf("Source List: \n");
			printLL(head1);
			printf("====================================================\n");
			printf("Destination List: \n");
			printLL(head2);
			printf("====================================================\n\n");
		}else {
			head2 = head1;
			printf("\n\n====================================================\n");
			printf("Source List: \n");
			printLL(head1);
			printf("====================================================\n");
			printf("Destination List: \n");
			printLL(head2);
			printf("====================================================\n\n");
		}
	}else if(head1==NULL && head2!=NULL) {

			printf("\n\n====================================================\n");
			printf("Source List: \n");
			printLL(head1);
			printf("====================================================\n");
			printf("Destination List: \n");
			printLL(head2);
			printf("====================================================\n\n");
	
	}else { 
		struct Demo* temp1 = head2;
		if(temp1 != NULL) {
			while(temp1->next!=NULL) {
				temp1 = temp1 -> next;
			}
		}
		int val = countNodes(head1) - num;
		struct Demo* temp2=head1;
		while(val) {
			temp2 = temp2->next;
			val--;
		}
		if(temp1==NULL) {
			temp1 = temp2;
		}else {
			temp1->next = temp2;
		}
		printf("\n\n====================================================\n");
		printf("Source List: \n");
		printLL(head1);
		printf("====================================================\n");
		printf("Destination List: \n");
		printLL(head2);
		printf("====================================================\n\n");
	}
}
void main() {
	int n;
	do {
		printf("1. Add Data In List1\n");
		printf("2. Add Data In List2\n");
		printf("3. print List1\n");
		printf("4. print List2\n");
		printf("5. concat Lists\n");
		printf("6. exit\n");
		printf("\n\nSelect Option\n");
		scanf("%d",&n);
		switch(n) {
			case 1:
				addNode(&head1);
				break;
			case 2:
				addNode(&head2);
				break;
			case 3:
				printLL(head1);
				break;
			case 4:
				printLL(head2);
				break;
			case 5:
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
				concatNLL();
			       }
				break;
			case 6:
				exit(0);
			default:
				break;
		}
	}while(n!=0);
}
