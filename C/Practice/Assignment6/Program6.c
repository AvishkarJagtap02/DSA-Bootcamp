#include<stdio.h>
void main() {
	int rows;
	printf("Enter rows\n");
	scanf("%d",&rows);

	int x=1;
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<i;j++) {
			printf("\t");
		}
		for(int k=i;k<=rows;k++) {
			printf("%d\t",k);
		}
		printf("\n");
	}
}
