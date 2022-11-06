#include<stdio.h>
void main() {

	int rows;
	printf("Enter number\n");
	scanf("%d",&rows);
	int z;
	char x = 64+rows,y=x;
	z=rows;
	for(int i=rows;i>=1;i--) {
		x=y;
		y=x;
		z=i;
		for(int j=1;j<=i;j++) {
			if(i%2==1) {
				printf("%c\t",x);
				x--;
				z--;
			}else {
				printf("%d\t",z);
				z--;
				x--;
			}

		}
		printf("\n");
		y--;
	}
}
