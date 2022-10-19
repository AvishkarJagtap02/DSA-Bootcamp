

#include <stdio.h>
	int x = 10;
	void fun() {
		int y = 20;
		int ans;
		ans = ++x + ++y;
		printf("%d\n",ans);	//32
	}
	void main() {

		printf("In Main\n");	//In Main
		fun();	
		printf("%d\n",x);	//11
		printf("End Main\n");	//End Main
}
