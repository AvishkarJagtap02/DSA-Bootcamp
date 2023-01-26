//o/p: 5 times Hello and 4 time bye
#include<stdio.h>
int x = 5;
void fun() {
	printf("Hello\n");
	if(x!=1) {
		fun(--x);
		printf("Bye\n");
	}
}
void main() {	
	fun();
}	
