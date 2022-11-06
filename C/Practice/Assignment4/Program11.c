#include<stdio.h>
void main() {

	int rows;
	printf("Enter number\n");
	scanf("%d",&rows);
	int x = 1;
	for(int i=rows;i>=1;i--) {
		for(int j=1;j<=i;j++) {
			if(j==i) {
				printf("%d\t",x);
			}else {
				printf("%d\t",x);
				x++;
			}
		}
		printf("\n");
	}
}
