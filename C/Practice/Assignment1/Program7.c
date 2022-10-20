#include<stdio.h> 
void main() {
	int rows,num=4;
	printf("Enter rows\n");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<=rows;j++) {
			printf("%d\t",num);
		}
		printf("\n");
		num--;
	}
}

