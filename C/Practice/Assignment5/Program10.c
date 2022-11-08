#include<stdio.h>
int Pow(int a,int b) {
	int power=1;
	for(int i=1;i<=b;i++) {
		power = power * a;
	}
	return power;
}

void main() {
	int rows;
	printf("Enter number of rows\n");
	scanf("%d",&rows);
	int x=1;
	for(int i=1;i<=rows;i++) {
		for(int k=rows;k>=i;k--) {
			printf("\t");
		}
		for(int j=i;j>=1;j--) {
			printf("%d\t",Pow(x,i));
			x++;
		}
		printf("\n");
	}
}
