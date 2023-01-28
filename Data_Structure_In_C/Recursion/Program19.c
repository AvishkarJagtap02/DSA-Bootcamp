#include<stdio.h>
int fibo(int N) {
	if(N == 0) {
		return 0;
	}
	if(N==1) {
		return 1;
	}
	return fibo(N-1) + fibo(N-2);
}
void main() {
	int N = 7;
	int fb = fibo(N);
	printf("fibonacci of %d is %d\n",N,fb);
}

