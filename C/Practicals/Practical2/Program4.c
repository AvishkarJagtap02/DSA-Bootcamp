#include<stdio.h>
void main() {
	int x,count=0;
	printf("Enter a number\n");
	scanf("%d",&x);
	if(x == 0 || x == 1) {
		printf("%d is not a prime number!",x);
	}

	for(int i=2;i<=x/2;i++) {
		if(x%i==0) {
			count++;
		}
	}
	if(count == 0) {
		printf("%d is a prime number!\n",x);
	}else {
		printf("%d is not a prime number!\n",x);
	}
}
