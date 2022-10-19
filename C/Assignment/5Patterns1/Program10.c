#include<stdio.h>
void main() {
	int n;
	char ch;
	int x ;
	printf("Enter no of rows\n");
	scanf("%d",&n);
	for(int i=n;i>=1;i--) {
		ch = 'D';
		x = 4;
		for(int j=n;j>=1;j--) {
			printf("%c%d ",ch,x);
			ch--;
			x--;
		}
		printf("\n");
	}
}

