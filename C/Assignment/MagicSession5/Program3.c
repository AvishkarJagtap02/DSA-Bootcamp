//RealTime Example
#include<stdio.h>
#include<stdlib.h>

	typedef struct FootballWC {
	
		int noOfTeams;
		char hostCountry[20],bestStriker[20],bestDefender[20];
		float budget;
		struct FootballWC *next;

	}FWC;

	FWC *head = NULL;

	FWC *createNode() {
	
		FWC *newNode = (FWC*)malloc(sizeof(FWC));
		printf("Enter no of teams in Fifa world cup:");
		scanf("%d",&newNode->noOfTeams);

		getchar();

		printf("Enter host country name:");
		scanf("%[^\n]",newNode->hostCountry);	
		
		getchar();
		printf("Enter best striker name:");
		scanf("%[^\n]",newNode->bestStriker);
		
		getchar();
		printf("Enter best defender name:");
		scanf("%[^\n]",newNode->bestDefender);
		printf("Enter budget of football world cup:");
		scanf("%f",&newNode->budget);

		newNode->next = NULL;

		return newNode;
	}

	void addNode() {

		FWC *newNode = createNode();

		if(head == NULL)
			head = newNode;
		else {
		
			FWC *tmp = head;
			while(tmp->next != NULL) 
				tmp = tmp->next;

			tmp->next = newNode;
		}
	}

	void addFirst() {
	
		FWC *newNode = createNode();

		if(head == NULL) {
		
			head = newNode;
		}else {
		
			newNode->next = head;
			head = newNode;
		}
	}

	int countNodes() {
	
		int cnt=0;
		FWC *tmp = head;

		while(tmp != NULL) {
			cnt++;
			tmp = tmp->next;
		}

		return cnt;
	}

	void addAtPos() {
	
		int pos;
		printf("Enter position:");
		scanf("%d",&pos);

		if(pos < 1 || pos > countNodes()+1 ) {
		
			printf("Error:Incorrect position\n");
		}else if(pos == 1) {
		
			addFirst();
		}else if(pos == countNodes()) {
		
			addNode();
		}else {
		
			FWC *newNode = createNode();
			FWC *tmp = head;

			while(pos-2) {
			
				tmp=tmp->next;
				pos--;
			}

			newNode->next = tmp->next;
			tmp->next = newNode;
		}
	}
	
	void printList() {
	
		FWC *tmp = head;

		printf("\n----------------------------------------------------------------------------------------------------\n");
		while(tmp != NULL) {
		
			printf("|%d-%s-%s-%s-%.2f|->",tmp->noOfTeams,tmp->hostCountry,tmp->bestStriker,tmp->bestDefender,tmp->budget);
			tmp=tmp->next;
		}
		printf("NULL\n");
		printf("\n----------------------------------------------------------------------------------------------------\n");
	}
	void deleteFirst() {
	
		if(head == NULL) {

			printf("List is empty already\n");
		}else {
		
			FWC *tmp = head;
			head = tmp->next;
			free(tmp);
		}
	}

	void deleteNode() {
	
		if(head == NULL) {
			printf("List is empty already\n");
	
		}else if(countNodes() == 1) {
		
			deleteFirst();
		}else {
		
			FWC *tmp = head;

			while(tmp->next->next != NULL)
				tmp = tmp->next;

			free(tmp->next);
			tmp->next = NULL;
		}

	}

	void deleteAtPos() {

		int pos;
		printf("Enter position:");
		scanf("%d",&pos);

		if(pos < 1 || pos > countNodes() ) {
		
			printf("Error:Incorrect position\n");
		
		}else if(pos == 1) {
			
			deleteFirst();

		}else if(pos == countNodes()){
		
			deleteNode();
		}else {
		
			FWC *tmp = head;

			while((pos--)-2) 
				tmp = tmp->next;

			FWC *tmp1 = tmp->next;
			tmp->next = tmp1->next;
			free(tmp1);
		}
	}	


	void main() {

		int ch;

		while(1) {

			printf("1.AddNode\n");
			printf("2.AddFirst\n");
			printf("3.AddAtPos\n");
			printf("4.PrintList\n");
			printf("5.DeleteNode\n");
			printf("6.DeleteFirst\n");
			printf("7.DeleteAtPos\n");
			printf("8.Exit\n");

			printf("Select any option from above:");
			scanf("%d",&ch);

			switch(ch) {
		
				case 1:
					addNode();
					break;	
				case 2:
					addFirst();
					break;
				case 3:
					addAtPos();
					break;
				case 4:
					printList();
					break;
				case 5:
					deleteNode();
					break;
				case 6:
					deleteFirst();
					break;
				case 7:
					deleteAtPos();
					break;
				case 8:
					exit(0);
					break;
			
				default:
					printf("Select correct option\n");
			}

		}

	}
