#include<stdio.h>
void fun();
void gun();
void main() {
	fun();
	gun();
}
extern void fun() {	//by defau;t extern is present before any function
	printf("In fun\n");
}
extern void gun() {
	printf("In gun\n");
}

