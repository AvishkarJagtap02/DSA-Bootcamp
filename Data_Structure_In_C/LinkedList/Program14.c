#include<stdio.h>
#include<stdlib.h>
typedef struct Recession {
	char company_Name[20];
	int no_of_emp_Fired;
	float rev;
	struct Recession *next;
}Demo;
Demo* head = NULL;
Demo* createNode() {
	Demo* newnode = (Demo*)malloc(sizeof(Demo));
        printf("Enter Company Name\n");
        int i=0;
	char ch = ' ';
	while((ch = getchar())!='\n') {
		newnode->company_Name[i] = ch;
		i++;
	}
	printf("Enter Number of employees Fired :  ");
	scanf("%d",&newnode->no_of_emp_Fired);
	
	printf("Enter Revenue of the company :  ");
	scanf("%f",&newnode->rev);


  	newnode->next = NULL;
	return newnode;
}	
void addNode() {
	Demo *newnode = createNode();
	if(head==NULL) {
		head = newnode;
	}else {
		Demo *temp = head;
		while(temp->next!=NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void addFirst() {
	Demo* newnode = createNode();
	if(head==NULL) {
		head = newnode;
	}else {
		newnode->next = head;
		head = newnode;
	}
}
int countNodes() {
	Demo* temp = head;
	int count = 0 ;
	while(temp!=NULL) {
		temp=temp->next;
		count++;
	}
	return count;
}
void addAtPos() {
	int pos =0;
	while(pos<=0) {
		printf("Enter position for Insertion : ");
		scanf("%d",&pos);
		getchar();
		if(pos<=0 || pos>countNodes() + 1 ){
			printf("Invalid Position Entered!!  Please Enter Valid Position \n");
			pos=0;
		}
	}
	if(pos == 1) {
		addFirst();
	}else if(pos == countNodes()) {
		addNode();
	}else {
		Demo* temp = head;
		while(pos-2) {
			temp = temp->next;
			pos--;
		}
		Demo* newnode = createNode();
		newnode->next = temp->next;
		temp->next = newnode;
	}
}

void printLL() {
	if(head == NULL) {
		printf("LinkedList is Empty\n");
		return;
	}
	Demo* temp = head;
	while(temp->next!=NULL) {
		printf("[ %s | %d | %f ]->",temp->company_Name,temp->no_of_emp_Fired,temp->rev);
		temp=temp->next;
	}
		printf("[ %s | %d | %f ]\n",temp->company_Name,temp->no_of_emp_Fired,temp->rev);
}
void deleteFirst() {
	Demo *temp = head;
	head = temp->next;
	free(temp);
}
void deleteLast() {
	Demo *temp = head;
	if(head == NULL) {
		return;
	}else if(head->next == NULL) {
		free(head);
		head=NULL;
		return;
	}
	while(temp->next->next!=NULL) {
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
}
void deleteAtPos() {
	int pos = 0;
	while(pos<=0) {
		printf("Enter Position to delete Node : ");
		scanf("%d",&pos);
		getchar();
		if(pos>countNodes() || pos<=0) {
			printf("Please Enter Valid Position \n");
			pos = 0;
		}
	}
	if(pos == 1){
		deleteFirst();
	}else if(pos == countNodes()) {
		deleteLast();
	}else {
		Demo* temp = head;
		while(pos-2) {
			pos--;
			temp = temp->next;
		}
		Demo* temp2 = temp->next;
		temp -> next = temp->next->next;
		free(temp2);
	}
}

void main() {
	char ch;
	int exit = 1;
	while(exit) {
		printf("1 : addFirst\n");
		printf("2 : addLast\n");
		printf("3 : adaAtPos\n");
		printf("4 : deleteFirst\n");
		printf("5 : deleteLast\n");
		printf("6 : deleteAtPos\n");
		printf("7 : printLL\n");
		printf("8 : countLL\n");
		printf("9 : exit\n");
		int choice;
		printf("Enter Choice\n");
		scanf("%d",&choice);
		getchar();
		switch(choice) {
			case 1:
				addFirst();
				break;
			case 2:
				addNode();
				break;
			case 3:
				addAtPos();
				break;
			case 4:
				deleteFirst();
				break;
			case 5:
				deleteLast();
				break;
			case 6:
				deleteAtPos();
				break;
			case 7:
				printLL();
				break;
			case 8:
				printf("count : %d\n\n",countNodes());
				break;
			case 9:
				exit = 0;
				break;
			default:
				printf("Wrong choice\n");
				break;
		}
	}

}
