#include<stdio.h>
void main() {
	int rows;
	printf("Enter number of rows\n");
	scanf("%d",&rows);
	char x = 96 + rows;
	for(int i=1;i<=rows;i++) {
		for(int j=rows;j>i;j--) {
			printf("\t");
		}
		for(int k=i;k>=1;k--) {
			printf("%c\t",x);
		}
		printf("\n");
		x--;
	}
}
