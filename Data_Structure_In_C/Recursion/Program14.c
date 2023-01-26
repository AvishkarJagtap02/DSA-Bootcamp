#include<stdio.h>
int SumN(int N) {
	if(N==1) {
		return 1;
	}
	return SumN(N-1) + N;
}
void main() {
	int N = 3;
	int ret = SumN(N);
        printf("sum is : %d\n",ret);
}	
