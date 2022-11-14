//putw & getw
#include<stdio.h>
void main() {
	FILE *fp = fopen("Demo.txt","w");
	printf("%d\n",getw(fp));
}

