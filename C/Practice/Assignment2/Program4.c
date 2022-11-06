#include<stdio.h>
void main() {
	int rows;
	char ch=96;
	printf("Enter number of rows\n");
	scanf("%d",&rows);
	ch=ch+rows;
	for(int i=rows;i>=1;i--) {
		for(int j=0;j<rows;j++) {
			printf("%c\t",ch);
		}
		ch--;
		printf("\n");
	}
}

