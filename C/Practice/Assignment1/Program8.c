#include<stdio.h> 
void main() {
	int rows,num;
	printf("Enter rows\n");
	scanf("%d",&rows);
	num = rows*3;
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<=rows;j++) {
			printf("%d\t",num);
			num--;
		}
		printf("\n");
	}
}

