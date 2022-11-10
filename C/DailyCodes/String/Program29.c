#include<stdio.h>
void gun();
void fun();
void main() { 
	extern int x;
	gun();
	fun();
	printf("%d\n",x);
}
int x =10;
void gun() {
	printf("In gun\n");
}
void fun() {
	printf("In fun\n");
}
