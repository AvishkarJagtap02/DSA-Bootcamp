#include<stdio.h>
void main() {
	int x;
	printf("Enter no .of rows \n");
	scanf("%d",&x);
	
	int a=1;
	for(int i=1;i<=x;i++) {
		a=1;
		for(int j=1;j<=x;j++) {
				printf("%d ",a);
				a = a + i;
		}
		printf("\n");
	}
}

