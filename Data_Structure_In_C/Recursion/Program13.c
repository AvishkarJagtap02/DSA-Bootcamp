#include<stdio.h>
int tailDemo(int N) {
	if(N==1) {
		return 1;
	}
	return 3 + tailDemo(--N);
}
void main() {
	int N = 5;
	int ret = tailDemo(N);
        printf("%d\n",ret);
}	
