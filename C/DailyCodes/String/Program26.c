#include<stdio.h>
//Global static variable
void fun();
static int x= 50;	//error: usr/bin/ld: /tmp/cc2G9yVD.o: in function `main': Program26.c:(.text+0xe): undefined reference to `fun' collect2: error: ld returned 1 exit status

void  main() {
	fun();
}
