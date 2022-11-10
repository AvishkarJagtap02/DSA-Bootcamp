#include<stdio.h>
void main() {
	extern int x;
	printf("%d\n",x);
}
static int x = 80;	//error: static declaration of ‘x’ follows non-static declaration
