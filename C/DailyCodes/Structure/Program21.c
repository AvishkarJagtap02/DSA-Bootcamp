#include<stdio.h>
union Employee {
	int empId;
	float empSal;
};
void main() {
//problem
//	union Employee emp1 = {10,20.30f};
//	printf("%d\n",emp1.empId);
//	printf("%f\n",emp1.empSal);
	union Employee emp2;
	emp2.empId = 15;
	printf("%d\n",emp2.empId);
	emp2.empSal = 70.65;
	printf("%f\n",emp2.empSal);
}
