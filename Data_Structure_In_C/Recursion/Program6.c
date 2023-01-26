//o/p:  print sum of number upto 1
#include<stdio.h>
int sum = 0;
void fun(int x) {
	sum = sum + x;
	if(x!=1) {
		fun(--x);
	}else {
		printf("sum = %d\n",sum);
	}
}
void main() {
	int x = 10;	
	fun(x);
}	
