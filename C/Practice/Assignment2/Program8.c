#include<stdio.h>
void main() {
	int rows;
	printf("Enter number of rows\n");
	scanf("%d",&rows);
	int x = rows*rows;
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<=rows;j++) {
			if(x%2==0) {
				printf("%d\t",(x*x));
				x--;
			}else {
				printf("%d\t",x);
				x--;
			}
		}
		printf("\n");
	}
}

