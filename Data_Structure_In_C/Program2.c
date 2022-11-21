#include<stdio.h>
#include<string.h>
typedef struct Batsman {
	int jerNo;
	char name[20];
	float avg;
	struct Batsman *next;
}Bat;
void main() {
	Bat obj1,obj2,obj3;
	Bat *head = &obj1;

	head->jerNo=18;
	strcpy(head->name,"Virat");
	head->avg=50.00;
	head->next=&obj2;

	obj1.next->jerNo = 7;
	strcpy(obj1.next->name,"Dhoni");
	obj1.next->avg =60.00;
	obj1.next->next=&obj3;
	
	obj2.next->jerNo = 22;
	strcpy(obj2.next->name,"Rohit");
	obj2.next->avg =80.00;
	obj2.next->next=NULL;

	printf("%d\n",head->jerNo);
	printf("%s\n",head->name);
	printf("%f\n",head->avg);

	printf("%d\n",obj1.jerNo);
	printf("%s\n",obj1.name);
	printf("%f\n",obj1.avg);
	
	printf("%d\n",obj1.next->jerNo);
	printf("%s\n",obj1.next->name);
	printf("%f\n",obj1.next->avg);
	
	printf("%d\n",obj2.next->jerNo);
	printf("%s\n",obj2.next->name);
	printf("%f\n",obj2.next->avg);

}



	




