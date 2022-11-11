#include<stdio.h>
void main() {
	int rows;
	printf("Enter rows\n");
	scanf("%d",&rows);
	char x=64+rows;
	for(int i=rows;i>=1;i--) {
		for(int j=i;j<4;j++) {
			printf("\t");
		}
		for(int k=i;k>=1;k--) {
			if(i%2!=0) {
				printf("%c\t",x+32);
			}else {
				printf("%c\t",x);
			}
			
		}
		printf("\n");
		x--;
	}
}
