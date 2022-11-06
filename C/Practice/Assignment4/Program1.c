#include<stdio.h>
void main() {
	int fact = 1,x;
	printf("Enter a number\n");
	scanf("%d",&x);

	for(int i=1;i<=x;i++) {
		fact =fact*i;
	}
	printf("factorial of %d is %d \n",x,fact);
}
