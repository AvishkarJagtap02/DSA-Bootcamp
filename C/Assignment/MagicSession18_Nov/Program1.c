#include<stdio.h>
int fun(int);
void main() {
	
	int s;
	s = fun(10);
	printf("%d\n",s);
}
int fun(int s) {
	if(s>20) {
		return 9;
	}else {
		return 20;
	}
}	
