#include<stdio.h>
void main() {
	int r;
	printf("Enter no . of rows\n");
	scanf("%d",&r);

	for(int i=1;i<=r;i++) {
		for(int j=1;j<=r;j++) {
			if(i==j) {
				printf("* ");
			}else {
				printf("- ");
			}
		}
		printf("\n");
	}
}
