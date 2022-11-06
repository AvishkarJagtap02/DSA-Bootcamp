#include<stdio.h>
void main() {

	int rows;
	printf("Enter number\n");
	scanf("%d",&rows);
	
	for(int i=rows;i>=1;i--) {
		int x=i;
		for(int j=1;j<=i;j++) {
			printf("%d\t",x);
			x--;
		}
		printf("\n");
	}
}
