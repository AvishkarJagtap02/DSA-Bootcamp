// Prime Number in Range

#include<stdio.h>
int printPrime(int n , int i) {

	if(i<=n) {
		int isPrime = 1;
		for(int j=2;j<=i/2;j++) {
			if(i%j==0) {
				isPrime = 0;
				break;
			}
		}
		
		if(isPrime == 1) {
			printf("%d ",i);
		}
		
		printPrime(n , i+1);
	}
}

void main() {
	int n;
	printf("Enter A Number\n");
	scanf("%d",&n);

	printf("The Prime Numbers upto %d is ",n);
	printPrime(n,2);
	printf("\n");
}



