#include <stdio.h>
void main() {
	int x = 8;
	int ans;
	ans = ++x + ++x + ++x;
	printf("%d\n",x);	//11
	printf("%d\n",ans);	//31
}
/*
x=8
9+10+11*/
