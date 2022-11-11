#include<stdio.h>
void main() {
	int rows;
	printf("Enter rows\n");
	scanf("%d",&rows);
	char ch=97
	for(int i=rows;i>=1;i--) {
		for(int j=i;j<4;j++) {
			printf("\t");
		}
		for(int k=i;k>=1;k--) {
			if(k%2==0) {
				printf("%c\t",ch);
				ch++;
			}else {
				printf("%c\t",ch-32);
				ch++;
			}
		}
		printf("\n");
	}
}
