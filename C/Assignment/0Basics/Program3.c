#include<stdio.h>
void main() {
	int x,y;
	printf("Enter first number\n");
	scanf("%d",&x);
	printf("Enter second number\n");
	scanf("%d",&y);

	if(x>y) {
		printf("%d\n",x);
	}else {
		printf("%d\n",y);
	}
}

