#include<stdio.h>
void main() {
	int n;
	char ch='A';
	printf("Enter no of rows\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}

