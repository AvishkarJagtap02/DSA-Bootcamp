#include<stdio.h>
#include<stdlib.h>
struct Demo {
	int data;
	struct Demo* next;
};
struct Demo* head =NULL;
struct Demo* createNode() {
	struct Demo* newnode = (struct Demo*)malloc(sizeof(struct Demo));   
	printf("Enter Node\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}
void addNode() {
	struct Demo* newnode = createNode();
	if(head==NULL) {
		head = newnode;
	}else {
		struct Demo* temp = head;
		while(temp->next !=NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void printLL() {
	struct Demo* temp = head;
	while(temp!=NULL) {
		printf("| %d |",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void secondLast(int target) {
	struct Demo* temp1 = head;
	struct Demo* temp2 = head;
	struct Demo* index1 = head;
	struct Demo* index2 = head;
	int occurence = 0 ;			
	while(temp1!=NULL) {
		if(temp1->data == target) {
			index1 = temp1;
			occurence++;
		} 
			temp1=temp1->next;
	}
	if(occurence==0) {
		printf("%d Not Exist\n",target);
	}else if(occurence==1) {
		printf("%d occurs only Once\n",target);
	}else {	
		int count1 = 1,count2 = 1;
		while(temp2!=index1) {
			if(temp2->data == target) {
				index2=temp2;
				count2=count1;
			}
			temp2=temp2->next;
			count1++;
		}
		printf("The second last occurenece is found at index %d\n",count2);
	}
}
				

void main() {
	int n;
	printf("Enter No of Nodes You Want\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		addNode();
	}
	int target;
	printf("Enter target to Find\n");
	scanf("%d",&target);
	printLL();
	secondLast(target);

}
