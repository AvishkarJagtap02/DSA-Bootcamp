#include<stdio.h> 
void main() {
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);

	if(x%5==0 && x%11==0) {
		printf("%d is divisible by 5 & 11\n",x);
	}else {
		printf("%d is divisible by 5 & 11\n",x);
	}
}
