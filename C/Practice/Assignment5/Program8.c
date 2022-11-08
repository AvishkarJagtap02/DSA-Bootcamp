#include<stdio.h>
void main() {
	int rows;
	printf("Enter number of rows\n");
	scanf("%d",&rows);
	char x;
	int y;
	for(int i=1;i<=rows;i++) {
		for(int j=rows;j>i;j--) {
			printf("\t");
		}
		x=65;
		y=1;
		for(int k=i;k>=1;k--) {
			if(i%2==0) {
				if(k%2==1) {
					printf("%c\t",x+32);
					x++;
				}else {
					printf("%c\t",x);
					x++;
				}
			}else if(i%2!=0) {
				printf("%d\t",y);
				y++;
			}
		}
		printf("\n");
	}
}
