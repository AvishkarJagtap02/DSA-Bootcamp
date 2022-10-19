
#include <stdio.h>
void main() {
	int n = 33;
	if(n & (n-1)) {
		printf("No\n");
	}
	else {
		printf("Yes\n");
	}
}
