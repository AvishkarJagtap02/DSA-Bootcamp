//o/p: factorial program using recursion
#include<stdio.h>
int fact = 1;
void fun(int x) {
	fact = fact*x;
	if(x!=1) {
		fun(--x);
	}else {
		printf("factorial = %d\n",fact);
	}
}
void main() {
	int x = 5;	
	fun(x);
}	
