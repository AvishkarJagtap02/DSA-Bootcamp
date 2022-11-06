#include<stdio.h>
void main() {

	int rows;
	printf("Enter number\n");
	scanf("%d",&rows);
	char x = 64+rows;
	for(int i=rows;i>=1;i--) {	
		for(int j=1;j<=i;j++) {
			if(i%2==1) {
				printf("%c\t",x);
			}else {
				printf("%c\t",x+32);
			}
		}
		printf("\n");
		x--;
	}
}
