#include<stdio.h>
struct Employee {
	char pName[20];
	int jerNo;
	float avg;
}obj2 = {"MS Dhoni",7,45.25};
void main() {
	struct Employee obj = {"virat Kohali",18,50.33};
	printf("%s\n",obj.pName);
	printf("%d\n",obj.jerNo);
	printf("%f\n",obj.avg);

	printf("%s\n",obj2.pName);
	printf("%d\n",obj2.jerNo);
	printf("%f\n",obj2.avg);
}

