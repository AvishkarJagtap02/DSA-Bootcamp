#include<stdio.h>
void main() {
	float i,n;
	printf("Enter a number\n");
	scanf("%f",&n);
	for(i = 0.01;i*i<n;i+=0.01);
		printf("\n%.2f",i);
}
