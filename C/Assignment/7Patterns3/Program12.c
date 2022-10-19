#include<stdio.h>
void main() {
	int rows = 4;
	for(int i=1;i<=rows;i++) {
		for(int space=1;space<i;space++) {
			printf("\t");
		}
		int num=1;
		for(int j=1;j<=(rows*2-2*i+1);j++) {
			
			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}
}
