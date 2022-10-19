#include<stdio.h> 
void main() {
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);

	if(x>10) {
		printf("%d is greater than 10\n",x);
	}else {
		printf("%d is less than 10\n",x);
	}
}
