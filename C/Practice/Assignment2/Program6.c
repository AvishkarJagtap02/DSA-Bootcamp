#include<stdio.h>
void main() {
	int rows;
	int x=1;
	printf("Enter number of rows\n");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<=rows;j++) {
			if(j==rows) {
				printf("%d\t",x);
				x--;
			}else {
				printf("%d\t",x);
				x++;
			}
		}
		printf("\n");
	}
}

