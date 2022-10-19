#include<stdio.h>
void main() {
	int n;
	printf("Enter no of rows\n");
	scanf("%d",&n);
	char x ='A';
	char y = x;

	for(int i=1;i<=n;i++) {
		y=x;
		for(int j=1;j<=n;j++) {
			printf("%c ",y);
			y++;
		}
		x++;
		printf("\n");
	}
}

