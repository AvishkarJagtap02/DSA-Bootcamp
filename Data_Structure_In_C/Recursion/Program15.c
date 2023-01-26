#include<stdio.h>
int fun(int N) {
	if(N<=1) {
		return 1;
	}
	int x = fun(N-1);
	int y = fun(N-2);
	printf("%d",x);
	printf("%d",y);
}
void main() {
	int N=4;
	int ret = fun(N);
	printf("%d\n",ret);
}

