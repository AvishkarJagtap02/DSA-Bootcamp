#include<stdio.h>
void main() {
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	if(n>0) {
		for(int i=1;i<=n;i++) {
			if(n%i==0) {
				printf("%d ",i);
			}
		}printf("\n");
	}else {
		printf("Enter a valid positive number\n");
	}
}
