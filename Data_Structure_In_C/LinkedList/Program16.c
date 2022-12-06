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
int SearchNode(int target) {
	struct Demo* temp = head;
	int index = 0;
	while(temp !=NULL) {
		if(temp->data == target) {
			return index;
		}
		temp = temp->next;
	}return -1;
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
	int index = SearchNode(target);
	if(index == -1) {
		printf("target element Not Found\n");
	}else {
		printf("target element Found\n");
	}
}
