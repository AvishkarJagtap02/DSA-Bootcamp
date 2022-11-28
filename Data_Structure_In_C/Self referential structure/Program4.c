#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employee {
	int empId;
	char eName[20];
	float sal;
	struct Employee *next;
}Emp;

void main() {
	Emp *emp1 = (Emp*)malloc(sizeof(Emp));
	Emp *emp2 = (Emp*)malloc(sizeof(Emp));
	Emp *emp3 = (Emp*)malloc(sizeof(Emp));
	
	emp1->empId = 1;
	strcpy(emp1->eName,"Avishkar");
	emp1->sal = 90.00;
	emp1->next = emp2;
	
	emp2->empId = 2;
	strcpy(emp2->eName,"Sandesh");
	emp2->sal = 80.00;
	emp2->next = emp3;

	emp3->empId = 3;
	strcpy(emp3->eName,"Suraj");
	emp1->sal = 70.00;
	emp3->next = NULL;
	
	printf("%d\n",emp1->empId);
	printf("%s\n",emp1->eName);
	printf("%f\n",emp1->sal);
	printf("%p\n",emp1->next);
	
	printf("%d\n",emp2->empId);
	printf("%s\n",emp2->eName);
	printf("%f\n",emp2->sal);
	printf("%p\n",emp2->next);
	
	printf("%d\n",emp3->empId);
	printf("%s\n",emp3->eName);
	printf("%f\n",emp3->sal);
	printf("%p\n",emp3->next);
}

