//o/p:  223552 ->segmentation fault
#include<stdio.h>
void fun() {
	static int x = 1;
	printf("%d\n",x);
	fun(++x);
}
void main() {
	
	fun();
}	
