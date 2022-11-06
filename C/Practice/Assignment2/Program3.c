#include<stdio.h>
void main() {
	int rows,x=1;
	printf("Enter number of rows\n");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<=rows;j++) {
			printf("%d\t",x);
			x+=3;
		}
		printf("\n");
	}
}

