// Is LinkedList Palindrome or not
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node {
	int data;
	struct Node *next;
};
struct Node *head=NULL;
struct Node* mid;
struct Node* createNode() {
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	return newnode;
}
void addNode() {
	struct Node* newnode = createNode();
	struct Node* temp = head;
	if(head == NULL) {
		head = newnode;
	}else {
		struct Node *temp = head;
		while(temp->next != NULL) {
			temp =temp->next;
		}
		temp->next = newnode;
	}
}
void printSLL() {
	struct Node* temp = head;
	while(temp->next!=NULL) {
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|->",temp->data);
}
int countNodes() {
	int count = 0;
	struct Node* temp = head;
	while(temp != NULL) {
		temp = temp->next;
		count++;
	}
	return count;
}
struct Node* midNode() {
	if(head == NULL) {
		printf("List is Empty\n");
		exit(0);
	}else if(head->next == NULL){
		return head;;
	}else {
		struct Node* fastptr = head->next;
		struct Node* slowptr = head;
		while(fastptr!=NULL || fastptr->next!=NULL) {
			fastptr = fastptr -> next->next;
			slowptr = slowptr -> next;
		}
		return slowptr;
	}
}
void reverse(struct Node* start) {

	struct Node* temp1 = mid;
	struct Node* temp2 = NULL;
	while(start!= NULL) {
		temp2 = start -> next;
		start-> next = temp1;
		temp1 = start;
		start = temp2;
	}
	start = temp1;	
}
bool isPalindrome() {
	if(head== NULL) {
		printf("List is Empty\n");
		return -1;
	}else if(head->next == NULL) {
		return true;
	}else {
		struct Node* temp = head;
		while(mid!=NULL) {
			if(temp->data == mid->data) {
				mid=mid->next;
				head = head->next;
			}
			else {
				return false;
			}
		}return true;
	}
}

			
void main() {
	int size;
	printf("Enter Size of LinkedList\n");
	scanf("%d",&size);
	for(int i=1;i<=size;i++) {
		addNode();
	}
	mid = midNode();
	printf("%d",mid->data);
	reverse(mid->next);
	if(isPalindrome()) {
		printf("LinkedList is Palindrome\n");
	}else {
		printf("LinkedList is not Palindrome\n");
	}
	mid = midNode();
	reverse(mid->next);
	printSLL();
}
