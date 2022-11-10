//Typedef
#include<stdio.h>
typedef struct Employee{
	int empId;
	char empName[20];
	float empSal;
}Emp;
void main() {
	struct Employee obj1 = {1400,"Jeevan",95.50};
	Emp obj2 = {14701,"Kanha",85.00};

	printf("%d\n",obj1.empId);
	printf("%s\n",obj1.empName);
	printf("%f\n",obj1.empSal);
	
	printf("%d\n",obj2.empId);
	printf("%s\n",obj2.empName);
	printf("%f\n",obj2.empSal);
}

