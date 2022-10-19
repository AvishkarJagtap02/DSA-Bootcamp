#include<stdio.h>
void main() {
	int x,rem;
	printf("Enter a number\n");
	scanf("%d",&x);
	while(x!=0) {
		rem = x%10;
		printf("%d",rem);
		x=x/10;
	}
	printf("\n");
}

