#include<stdio.h>
void main() {
	int rows;
	printf("Enter rows\n");
	scanf("%d",&rows);

	char x=64+rows;
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<i;j++) {
			printf("\t");
		}
		for(int k=i;k<=rows;k++) {
			if(i%2!=0) {
				printf("%c\t",x);
			}else {
				printf("%c\t",x+32);
			}
		}
		printf("\n");
		x--;
	}
}
