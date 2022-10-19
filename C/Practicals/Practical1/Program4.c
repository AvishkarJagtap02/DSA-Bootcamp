#include<stdio.h>
void main() {
	int m;
	printf("Enter a number of a month\n");
	scanf("%d",&m);

	switch(m) {
		case 1:
			printf("January has 31 Days\n");
			break;
		case 2:
			printf("February has 28 or 29 days Days\n");
			break;
		case 3:
			printf("March has 31 Days\n");
			break;
		case 4:
			printf("April has 30 Days\n");
			break;
		case 5:
			printf("May has 31 Days\n");
			break;
		case 6:
			printf("June has 30 Days\n");
			break;
		case 7:
			printf("July has 31 Days\n");
			break;
		case 8:
			printf("August has 31 Days\n");
			break;
		case 9:
			printf("September has 30 Days\n");
			break;
		case 10:
			printf("October has 31 Days\n");
			break;
		case 11:
			printf("November has 30 Days\n");
			break;
		case 12:
			printf("December has 31 Days\n");
			break;
		default:
			printf("Invalid Month\n");
			break;
	}
}
			

