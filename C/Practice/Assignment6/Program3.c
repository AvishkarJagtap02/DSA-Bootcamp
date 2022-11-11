#include<stdio.h>
void main() {
	int rows;
	printf("Enter rows\n");
	scanf("%d",&rows);

	for(int i=rows;i>=1;i--) {
		int x =1;
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
