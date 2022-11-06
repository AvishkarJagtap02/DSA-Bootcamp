#include<stdio.h>
void main() {
	int rows;
	char ch='a';
	printf("Enter number of rows\n");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<=rows;j++) {
			if(j%2==0) {
				printf("%c\t",ch-32);
				ch++;
			}else {
				printf("%c\t",ch);
				ch++;
			}
		}
		printf("\n");
	}
}

