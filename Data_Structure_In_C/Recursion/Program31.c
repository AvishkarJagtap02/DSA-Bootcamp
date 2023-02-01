#include<stdio.h>
#include<stdlib.h>
int reverse(int rem,int rev , int n) {
	while(n!=0) {
		reverse(rem = n %10,rev = rev * 10 + rem,n=n/10);
	}
	return rev;
}
void main() {
	int n=0,rem=0,rev = 0;
	printf("Enter Number\n");
	scanf("%d",&n);
	if(n == 0) {
		printf("reverse : %d\n",n);
		exit(0);
	}
	int revv = reverse(n%10,rev,n);
	printf("reverse : %d\n",revv);
}
