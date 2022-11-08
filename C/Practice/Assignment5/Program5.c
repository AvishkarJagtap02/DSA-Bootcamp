#include<stdio.h>
void main() {
	int rows;
	printf("Enter number of rows\n");
	scanf("%d",&rows);
	char x=64+rows;
	char y=x;
	for(int i=1;i<=rows;i++) {
		for(int j=rows;j>i;j--) {
			printf("\t");
		}
		x=y;
		for(int k=i;k>=1;k--) {
			printf("%c\t",x);
			x++;
		}
		printf("\n");
		y--;
	}
}
