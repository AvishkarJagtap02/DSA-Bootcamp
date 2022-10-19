#include<stdio.h> 
void main() {
	int cols,rows=4,space;
	for(int i=1;i<rows*2;i++) {
		if(i<=rows) {
			space = rows-i;
		}else {
			space = i-rows;
		}
		for(int sp = 1;sp <= space;sp++) {
			printf(" ");
		}
		if(i<=rows)
			cols = i;
		else 
			cols = rows*2-i;
		for(int j=1;j<=cols;j++) {
			printf("*");
		}printf("\n");
	}
}
