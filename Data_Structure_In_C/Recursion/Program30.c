#include<stdio.h>
#include<stdlib.h>
int reverse(int n) {
	int rem = 0,rev = 0;
	while(n!=0) {
		rem = n %10;
		rev = rev * 10 + rem;
		n=n/10;
	}
	return rev;
}
void main() {
	int n=0;
	printf("Enter Number\n");
	scanf("%d",&n);
	if(n == 0) {
		printf("reverse : %d\n",n);
		exit(0);
	}
	int rev = reverse(n);
	printf("reverse : %d\n",rev);
}
