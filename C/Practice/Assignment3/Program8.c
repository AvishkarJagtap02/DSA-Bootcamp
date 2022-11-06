#include<stdio.h>
void main() {
	int rows,x=1;
	printf("Enter Rows\n");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++) {
		x=i;
		for(int j=1;j<=i;j++) {
			printf("%d ",x);
			x+=i;
		}
		printf("\n");
	}
}


