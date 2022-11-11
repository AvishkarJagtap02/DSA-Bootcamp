#include<stdio.h>
void main() {
	int rows,x=1;
	printf("Enter rows\n");
	scanf("%d",&rows);

	for(int i=rows;i>=1;i--) {
		for(int j=i;j<4;j++) {
			printf("\t");
		}
		for(int k=i;k>=1;k--) {
			printf("%d\t",x);
			x++;
		}
		printf("\n");
	}
}
