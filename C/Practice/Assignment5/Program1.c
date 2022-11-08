#include<stdio.h>
void main() {
	int rows,x;
	printf("Enter number of rows\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++) {
		for(int j=rows;j>i;j--) {
			printf("\t");
		}
		x=1;
		for(int k=i;k>=1;k--) {
			printf("%d\t",x);
			x++;
		}
		printf("\n");
	}
}
