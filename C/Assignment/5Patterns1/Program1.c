#include<stdio.h>
void main() {
	int n;
	printf("Enter no of rows\n");
	scanf("%d",&n);
	int x =1;
	for(int i=1;i<=n;i++) {
		x = i;
		for(int j=1;j<=n;j++) {
			printf("%d ",x);
			x++;
		}
		printf("\n");
	}
}

