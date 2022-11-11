#include<stdio.h>
void main() {
	int rows;
	printf("Enter rows\n");
	scanf("%d",&rows);
	int x=1,y=x;;
	for(int i=rows;i>=1;i--) {
		for(int j=i;j<4;j++) {
			printf("\t");
		}
		for(int k=i;k>=1;k--) {
			printf("%d\t",x);
			x++;
		}
		printf("\n");
		x=y;
		y++;
		x++;
	}
}
