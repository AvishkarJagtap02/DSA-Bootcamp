#include<stdio.h>
void main() {
	int rows;
	printf("Enter Rows\n");
	scanf("%d",&rows);
	int x = rows;
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<=i;j++) {
			printf("%d ",x);
		}
		printf("\n");
		x--;
	}
}


