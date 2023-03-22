//sum of n digits
#include <stdio.h>
int fun(int n) {
	int sum =0;
	if(n == 0 ) {
		return 0;
	}
	sum = n%10 + fun(n/10);
	return sum;
}
void main() {
	
	int Sum = fun(123);
	printf("Sum : %d", Sum);
	printf("\n");
}
