#include<stdio.h>
void main() {
	int n ,count=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	if(n>0) {
		for(int i=2;i<=n/2;i++) {
			if(n%i==0) {
				count++;
			}
		}
		if(count == 0) {
			printf("%d is a prime number\n",n);
		}else {
			printf("%d is not a prime number\n",n);
		}
	}else {
		printf("Enter a valid positive number\n");
	}
}

