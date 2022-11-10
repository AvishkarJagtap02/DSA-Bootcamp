#include<stdio.h>
void fun(static int x , static int y) {	// error : error: storage class specified for parameter ‘x’
	int a;
	register int b =30;
	static int c = 40;
	extern int d;
}
void main() {
	fun(20,30);
}
