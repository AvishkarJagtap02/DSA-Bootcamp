#include<stdio.h>
void main() {
	int rows;
	printf("Enter Rows\n");
	scanf("%d",&rows);
	int y = rows;
	for(int i=1;i<=rows;i++) {
		char x = 96;
		x = x + y;
		for(int j=1;j<=i;j++) {
			printf("%c ",x);
		}
		printf("\n");
		y--;
	}
}


