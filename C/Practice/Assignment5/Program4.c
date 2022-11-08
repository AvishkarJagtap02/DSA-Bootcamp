#include<stdio.h>
void main() {
	int rows,x=1;
	printf("Enter number of rows\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++) {
		for(int j=rows;j>i;j--) {
			printf("\t");
		}
		for(int k=i;k>=1;k--) {
			printf("%d\t",x);
			x+=rows;
		}
		printf("\n");
	}
}
