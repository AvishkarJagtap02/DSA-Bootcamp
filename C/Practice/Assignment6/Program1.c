#include<stdio.h>
void main() {
	int rows;
	printf("Enter rows\n");
	scanf("%d",&rows);

	for(int i=rows;i>=1;i--) {
		for(int j=i;j>rows;j--) {
			printf("\t");
		}
		for(int k=i;k>=1;k--) {
			printf("*\t");
		}
		printf("\n");
	}
}
