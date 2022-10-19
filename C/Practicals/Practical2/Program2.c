#include<stdio.h>
void main() {
	int x,i=1,j=10;
	printf("Enter a number\n");
	scanf("%d",&x);

	for(;i<=10;) {
		for(;j>=1;) {
			printf("%d + %d = %d\n",i,j,(i+j));
			i++;
			j--;
		}
	}
}
