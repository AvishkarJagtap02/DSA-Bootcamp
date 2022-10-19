// write a program that takes a number from 0 - 5 and prints its spelling, if the number is greater than 5 print entered number is greater than 5 (use switch case)
#include<stdio.h> 
void main() {
	int x;
	printf("Enter number\n");
	scanf("%d",&x);

	switch(x) {
		case 0:
			printf("Zero\n");
			break;
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
			break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("Four\n");
			break;
		case 5:
			printf("Five\n");
			break;
		default:
			printf("Number is greater than five Or Maybe Invalid\n");
			break;
	}
}
