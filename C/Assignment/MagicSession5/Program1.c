#include<stdio.h>
#include<stdlib.h>
typedef struct Demo {
	int data;
	struct Demo* next;
}Demo;
Demo* head = NULL;
Demo* createNode() {
	Demo* newnode = (Demo*)malloc(sizeof(Demo));
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}
void addNode() {
	Demo* newnode = createNode();
	if(head == NULL) {
		head= newnode;
	}else {
		Demo* temp = head;
		while(temp->next!=NULL) {
			temp = temp-> next;
		}
		temp -> next = newnode;
	}
}
void FirstOccurrence() {
	int target;
	printf("Enter Target\n");
	scanf("%d",&target);
	int count1 = 1,count2 = 0;
	Demo* temp = head;
	while(temp!=NULL) {
		if(temp->data == target) {
			count2=count1;
			printf("First Occurrence : %d\n",count2);
			break;	
		}
		temp=temp->next;
		count1++;
	}
	if(temp == NULL) 
		printf("Element Not Exists\n");
}
void secondLastOccurrence() {
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	Demo* temp = head;
	int fidx=-1,sidx=-1,pos=1;
	while(temp!=NULL) {
		if(temp->data==num) {
			if(fidx == -1) {
				fidx = pos;
			}	
			else {
				sidx = fidx;
				fidx = pos;
			}
		}
		pos++;
		temp = temp -> next;
	}
	if(fidx==-1) {
			printf("Element not Exist\n");
	}else if(sidx==-1) {
			printf("Element occurs only once\n");
	}else {
		printf("Second Last Occurrence is : %d\n",sidx);
	}	
}
int addData(int n) {
	int temp = n;
	int rem = 0;
	int sum=0;
	while(n!=0) {
		rem = n % 10;
		sum = sum+rem;
		n=n/10;
	}
	return sum;
}
int addDataElements() {
	Demo* temp = head;
	while(temp->next!=NULL) {
		temp->data = addData(temp->data);
		printf("|%d|->",temp->data);
		temp=temp->next;
	}	
	printf("|%d|",addData(temp->data));
	printf("\n");

}
void occurrence() {
	int target;
	printf("Enter a number to check its occurrence\n");
	scanf("%d",&target);
	Demo* temp = head;
	int count = 0;
	while(temp!=NULL) {
		if(temp->data == target) {
			count++;
		}
		temp = temp -> next;
	}
	printf("%d times\n",count);
}
int IsPalindrome(int n) {
	int temp = n;
	int rem = 0,sum = 0;
	while(n!=0) {
		rem = n%10;
		sum = sum*10 + rem;
		n=n/10;
	}
	if(sum == temp) { 
		return 1;
	}
	return 0;
}
void Print_Palindrome_Index() { 
	int flag = 0,count = 1;
	Demo* temp = head;
	while(temp!=NULL) {
		if(IsPalindrome(temp->data)) {
			flag=1;
			printf("Palindrome Found at : %d\n",count);
		}
		temp=temp->next;
		count++;
	}
	if(flag == 0)  {
		printf("No Palindrome found\n");
	}
}
void main() {
	 int n;
	 printf("Enter Number of Nodes you want\n");
	 scanf("%d",&n);
	 for(int i=1;i<=n;i++) {
		addNode();
	 }
	 FirstOccurrence();
	 printf("For Second Last Occurrence\n");
	 secondLastOccurrence();
	 occurrence();
	 Print_Palindrome_Index();
	 addDataElements();
}
