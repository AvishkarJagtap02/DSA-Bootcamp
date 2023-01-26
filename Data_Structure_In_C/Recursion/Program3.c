//o/p:  261722 ->segmentation fault
#include<stdio.h>
int x = 1;
void fun(int x) {
	printf("%d\n",x);
	fun(++x);
}
void main() {
	
	fun(x);
}	
