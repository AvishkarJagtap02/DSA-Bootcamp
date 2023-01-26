//program to concat first n contents of LinkedList 1 to LinkedList2
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
struct Demo* copyAllLL(struct Demo* head1) {		//changed
    if (head1 == NULL) {
        return NULL;
    }
    else {
    
	    printf("called \n");			//changed

	struct Demo* newnode = (struct Demo*)malloc(sizeof(struct Demo));
        newnode->data = head1->data;
        newnode->next = copyAllLL(head1->next);									
        return newnode;
    }
}										//1 - 2 - 3 - 4 - 5
										// -> 3
										//1 - 2 - 3

struct Demo* create_Node(int val) {
	struct Demo* newnode = (struct Demo*)malloc(sizeof(struct Demo));
	newnode->data = val;
	newnode->next = NULL;
	return newnode;
}
struct Demo* copyNLL(int num) {
	struct Demo* temp1 = head1;
	struct Demo* temp2 = head2;
	while(num) {

		printf("created....\n");

    		struct Demo* newnode = create_Node(temp1->data);		
		if(head2==NULL) {
			head2 = newnode;
			temp1=temp1->next;
			temp2 = head2;			//changed
			num--;
		}else { 
		    	temp2->next = newnode;
		    	temp2 = temp2->next;
			temp1 = temp1->next;
		    	num--;
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
void copyLL() {
	int num;
	struct Demo* temp1 = head1;
	printf("\nEnter Number of nodes to copy\n");
	scanf("%d",&num);
	if(num>=countNodes(head1)) {

		printf("copy all nodes..\n");

		head2 = copyAllLL(head1);			//changed
		printf("\n\n====================================================\n");
		printf("Source List: \n");
		printLL(head1);
		printf("====================================================\n");
		printf("Destination List: \n");
		printLL(head2);
		printf("====================================================\n\n");
	}else {
		copyNLL(num);
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
		printf("2. print List1\n");
		printf("3. print List2\n");
		printf("4. concat Lists\n");
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
				copyLL();
			       }
				break;
			case 5:
				exit(0);
			default:
				break;
		}
	}while(n!=0);
}
