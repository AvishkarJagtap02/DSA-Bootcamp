#include<stdio.h>
//Global scope
int y=10;
void fun() {
	++y;
	printf("%d\n",y);
}
void  main() {
	fun();	//11
	fun();	//12
	fun();	//13
}
