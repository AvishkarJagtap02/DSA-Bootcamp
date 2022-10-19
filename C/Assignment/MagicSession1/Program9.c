#include<stdio.h>
void main() {
	int r;
	printf("Enter no . of rows\n");
	scanf("%d",&r);

	for(int i=1;i<=r;i++) {
		int x = 1;
		for(int j=r;j>=i+1;j--) {
				printf("\t");
		}
		for(int k=1;k<=i;k++) {
			printf("%d\t",x);
			x++;
		}
		printf("\n");
	}
}
