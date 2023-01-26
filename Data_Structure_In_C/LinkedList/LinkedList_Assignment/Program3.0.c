//add First N elements from LinkedList 1 to LinkedList2
#include<stdio.h>
#include<stdlib.h>
struct Demo {
	int data;
	struct Demo *next;
};
struct Demo* head1 = NULL;
struct Demo* head2 = NULL;
struct Demo* head3 = NULL;
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
	struct Demo* temp = head;
	while(temp!=NULL) {
		printf("|%d| ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int countNodes() {
	int count = 0;
	struct Demo* temp = head1;
	while(temp!=NULL) {
		temp=temp->next;
		count++;
	}return count;
}
void concatNLL(int num) {
	struct Demo* temp = head2;
	if(head2 != NULL) {
		while(temp->next!=NULL) {
			temp = temp->next;
		}
	}else {
		temp = NULL;
	}
	struct Demo* temp1 = head1;
	struct Demo* newnode = (struct Demo*)malloc(sizeof(struct Demo));
	newnode->data = temp1->data;
	head3 = newnode; 
	struct Demo* tmp = head3;
	temp1=temp1->next;
	while(num-1) {
		newnode = (struct Demo*)malloc(sizeof(struct Demo));
		tmp->next = newnode;
		tmp = newnode;
		newnode->data=temp1->data;
		temp1=temp1->next;
		num--;
	}
	if(temp!=NULL) 
		temp->next = head3;
	else 
		head2 = head3;	
}
void main() {
	int n1,n2,num;
	printf("Enter The Number of Nodes in LinkedList 1 : \n");
	scanf("%d",&n1);
	if(n1>0) {
		printf("Enter Data For LinkedList 1:\n");
		for(int i=1;i<=n1;i++) {
			addNode(&head1);
		}
	}
	printf("Enter The Number of Nodes in LinkedList 2 : \n");
	scanf("%d",&n2);
	if(n2>0) {
		for(int i=1;i<=n2;i++) {
			addNode(&head2);
		}
	}
	if(n1<= 0 && n2 <= 0) {
		printf("Both List are Empty!!!\n");
		exit(0);
	}
	if(n1>0) {
		printf("Enter how many elements you want to concat from linkedlist 1\n");
		printLL(head1);
		scanf("%d",&num);
		if(num<1 || num>countNodes(head1)) {
			printf("Invalid Number Entered! (not enough Elements)\n");
			exit(0);
		}
	}else {
		printf("First LinkedList is Empty!!! so the elements from the 1st linkedlist cannot be concatenated So Final LinkedList will be as it is : \n");
		printf("concatenated LinkedList : \n");
		printLL(head2);
		exit(0);
	}
	if(n2<=0) {
		printf("First LinkedList: \n");
		printLL(head1);
		printf("Second LinkedList: \n NULL \n");
		concatNLL(num);
		printf("LinkedList after Concatenation : ");
		printLL(head2);
		exit(0);
	}
	printf("First LinkedList: \n");
	printLL(head1);
	printf("Second LinkedList: \n");
	printLL(head2);
	concatNLL(num);
	printf("LinkedList After concatenation is : \n");
	printLL(head2);
}
