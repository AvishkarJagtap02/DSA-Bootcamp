#include<stdio.h>
int n = 3;
int sum(int n) {
	if(n==1) {
		return 1;
	}
	return sum(n-1) + n;
}
void main() {
	printf("%d\n",sum(n));
}
