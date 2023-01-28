#include<stdio.h>
void fibo(int N) {
	int a = 0, b = 1 , c =0;
	int i = 2;
	printf("%d ",a);
	printf("%d ",b);
	while(i!=N+1) {
		c = a + b;
		printf("%d ",c);
		a=b;
		b=c;
		i++;
	}
	printf("\n");
}
void main() {
	int N = 7;
	fibo(N);
}

