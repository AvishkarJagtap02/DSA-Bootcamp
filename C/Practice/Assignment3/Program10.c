#include<stdio.h>
void main() {
	int rows;
	printf("Enter Rows\n");
	scanf("%d",&rows);
	int x = rows*2+2;
	char ch = 64+x;
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<=i;j++) {
			if(i%2==0) {
				printf("%c\t",ch);
				ch--;
				x--;
			}else {
				printf("%d\t",x);
				x--;
				ch--;
			}
		}
		printf("\n");
	}
}


