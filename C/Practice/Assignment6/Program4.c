#include<stdio.h>
void main() {
	int rows;
	printf("Enter rows\n");
	scanf("%d",&rows);
	
	char ch=96+rows;
	for(int i=rows;i>=1;i--) {
		for(int j=i;j<4;j++) {
			printf("\t");
		}
		for(int k=i;k>=1;k--) {
			printf("%c\t",ch);
		}
		printf("\n");
		ch--;
	}
}
