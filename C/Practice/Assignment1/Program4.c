#include<stdio.h> 
void main() {
	int rows,cols,num=1;
	printf("Enter rows\n");
	scanf("%d",&rows);
	printf("Enter columns\n");
	scanf("%d",&cols);
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<=cols;j++) {
			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}
}

