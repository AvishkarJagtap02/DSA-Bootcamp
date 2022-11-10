#include<stdio.h>
void fun() {
	//Local Scope
	int y=10;
	++y;
	printf("%d\n",y);
}
void  main() {
	fun();	//11
	fun();	//11
	fun();	//11
}
