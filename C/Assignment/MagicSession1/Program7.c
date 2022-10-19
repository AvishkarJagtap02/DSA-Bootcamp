#include<stdio.h>
void main() {
	int r;
	printf("Enter no . of rows\n");
	scanf("%d",&r);

	for(int i=1;i<=r;i++) {
		char ch = 64+r;
		for(int j=r;j>=i;j--) {
				printf("%c\t",ch);
				ch--;
		}
		printf("\n");
	}
}
