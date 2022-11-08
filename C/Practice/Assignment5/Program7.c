#include<stdio.h>
void main() {
	int rows;
	printf("Enter number of rows\n");
	scanf("%d",&rows);
	char x=65;
	char y=x;
	for(int i=1;i<=rows;i++) {
		for(int j=rows;j>i;j--) {
			printf("\t");
		}
		x=y;
		for(int k=i;k>=1;k--) {
			if(i%2==0) {
				printf("%c\t",x+32);
				x--;
			}else if(i%2!=0) {
				printf("%c\t",x);
				x+=2;
			}
		}
		printf("\n");
		y++;
	}
}
