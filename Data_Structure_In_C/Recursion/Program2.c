//o/p: -261850 ->segmentation fault
#include<stdio.h>
void fun(int x) {
	printf("%d\n",x);
	fun(--x);
}
void main() {
	int x = 5;
	fun(x);
}	
