//Dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int malloc_Add() {
	int *ptr1 = (int *)malloc(sizeof(int));
	int *ptr2 = (int *)malloc(sizeof(int));
	*ptr1=10;
	*ptr2=20;
	return *ptr1+*ptr2;
}
void main() {
	int x = malloc_Add(x);
	printf("%d\n",x);
}
