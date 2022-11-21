#include<stdio.h>
#include<string.h>
typedef struct Company {
	int empCount;
	char name[20];
	float rev;
	struct Company *next;
}com;
void main() {
	com obj1,obj2,obj3;
	com *head = &obj1;

	head->empCount=1800;
	strcpy(head->name,"Veritas");
	head->rev=500.00;
	head->next=&obj2;

	obj1.next->empCount = 700;
	strcpy(obj1.next->name,"Apple");
	obj1.next->rev =6000.00;
	obj1.next->next=&obj3;
	
	obj2.next->empCount = 2200;
	strcpy(obj2.next->name,"Microsoft");
	obj2.next->rev =8000.00;
	obj2.next->next=NULL;

	printf("%d\n",head->empCount);
	printf("%s\n",head->name);
	printf("%f\n",head->rev);

	printf("%d\n",obj1.empCount);
	printf("%s\n",obj1.name);
	printf("%f\n",obj1.rev);
	
	printf("%d\n",obj1.next->empCount);
	printf("%s\n",obj1.next->name);
	printf("%f\n",obj1.next->rev);
	
	printf("%d\n",obj2.next->empCount);
	printf("%s\n",obj2.next->name);
	printf("%f\n",obj2.next->rev);

}



	




