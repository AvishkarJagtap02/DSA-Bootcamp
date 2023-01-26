#include<stdio.h>
int factorial(int N) {
	if(N==1) {
		return 1;
	}
	return factorial(N-1) * N;
}
void main() {
	int N = 5;
	int ret = factorial(N);
        printf("%d\n",ret);
}	
