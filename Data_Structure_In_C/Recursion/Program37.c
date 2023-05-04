// Tower of Hanoi Problem
#include <stdio.h>
void TOH(int N, char A,char B, char C) {
	
	if(N>0) {
		TOH(N-1,A,C,B);
		printf("%c -> %c\n",A,C);
		TOH(N-1,B,A,C);		
	}
}
void main() {

	int N;
	printf("Enter Value of N: \n");
	scanf("%d",&N);
	TOH(N,'A','B','C');
}
