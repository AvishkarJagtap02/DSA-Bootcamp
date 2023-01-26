//o/p:  print number upto 1
#include<stdio.h>
void fun(int x) {
	printf("%d\n",x);
	if(x!=1) {
		fun(--x);
	}
}
void main() {
	int x = 10;	
	fun(x);
}	
