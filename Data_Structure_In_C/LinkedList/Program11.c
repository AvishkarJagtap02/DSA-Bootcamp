#include<stdio.h>
#include<stdlib.h>
#define BUFFER_SIZE 15
#include<string.h>
typedef struct Movie {
	char mName[BUFFER_SIZE];
	float imdb;
	struct Movie *next;
}mov;
struct Movie *head=NULL;
void addNode() {
	mov *newnode = (mov*)malloc(sizeof(mov));
	printf("Enter Movie Name\n");
	if(fgets(newnode->mName,15,stdin)!=NULL) {
		newnode->mName[strcspn(newnode->mName, "\n")] = '\0';
	}
	printf("Enter imdb\n");
	scanf("%f",&newnode->imdb);
	newnode->next=NULL;
	getchar();

	if(head == NULL) {
		head = newnode;
	}else {
		mov *temp = head;
		while(temp->next!=NULL) {
			temp=temp->next;
		}
		temp->next = newnode;
	}
}
void printLL() {
	mov *temp = head;
	while(temp!=NULL) {
		printf("%s ",temp->mName);
		printf("%f ||",temp->imdb);
		temp = temp->next;
	}
}
void main() {

	addNode();
	addNode();
	addNode();
	addNode();

	printf("\n");

}


