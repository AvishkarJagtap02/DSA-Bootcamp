#include<stdio.h> 
void main() {
	int year;
	printf("Enter a Year\n");
	scanf("%d",&year);

	if(year!=0) {
		if(year%4==0 && year%100!=0 || year%400==0 ) {
			printf("it is leap year\n");
		}else {
			printf("it is not leap year\n");
		}
	}
}


