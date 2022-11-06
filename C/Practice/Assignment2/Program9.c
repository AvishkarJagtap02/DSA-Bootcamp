#include<stdio.h>
void main() {
	int rows,x=1;
	char ch='A';
	printf("Enter number of rows\n");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<=rows;j++) {
			if(x%2==0) {
				printf("%c\t",ch+32);
				ch++;
				x++;
			}else {
				printf("%c\t",ch);
				ch++;
				x++;
			}
		}
		printf("\n");
	}
}

