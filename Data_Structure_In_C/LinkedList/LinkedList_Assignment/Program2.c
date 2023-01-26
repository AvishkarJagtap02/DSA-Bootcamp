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
	struct Demo* temp = head;
	while(temp!=NULL) {
		printf("|%d| ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void concatLL() {
	if(head1==NULL) {
		printLL(head2);
		exit(0);
	}
	if(head2==NULL) {
		printLL(head1);
		exit(0);
	}
	struct Demo* temp = head2;
	while(temp->next!=NULL) {
		temp = temp->next;
	}
	temp->next = head1;
}
void main() {
	

	int n1,n2;
	printf("Enter The Number of Nodes in LinkedList 1 : \n");
	scanf("%d",&n1);
	printf("Enter Data For LinkedList 1:\n");
	for(int i=1;i<=n1;i++) {
		addNode(&head1);
	}
	printf("Enter The Number of Nodes in LinkedList 2 : \n");
	scanf("%d",&n2);
	for(int i=1;i<=n2;i++) {
		addNode(&head2);
	}
	printLL(head1);
	printLL(head2);
	concatLL();
	printf("Concated List is: ");
	printLL(head2);
}
