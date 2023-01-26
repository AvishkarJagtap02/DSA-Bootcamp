#include<stdio.h>
int fun(int N) {
	printf("%d\n",N);
	if(N<=1) {
		return 1;
	}
	return fun(N-1) + fun(N-2);
}
void main() {
	int N=3;
	int sum = fun(N);
	printf("%d\n",sum);
}

