#include<stdio.h>
void main() {

	int rows;
	printf("Enter number\n");
	scanf("%d",&rows);
	int x=1,y=0;
	for(int i=rows;i>=1;i--) {
		x=1;
		x+=y;
		for(int j=1;j<=i;j++) {
			printf("%d\t",x);
			x++;
		}
		printf("\n");
		y++;
	}
}
