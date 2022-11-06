#include<stdio.h>
void main() {

	int rows;
	printf("Enter number\n");
	scanf("%d",&rows);
	char x = 64+rows,y=x;
	for(int i=rows;i>=1;i--) {
		x=y;
		y=x;
		for(int j=1;j<=i;j++) {
			printf("%c\t",x);
			x--;
		}
		printf("\n");
		y--;
	}
}
