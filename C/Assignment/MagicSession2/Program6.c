#include<stdio.h>
void main() {
	int x = 10;
	int y = 20;
	int *xptr = &x;
	int *yptr = &y;
	printf("value of x before swapping is : %d\n",*xptr);
	printf("value of y before swapping is : %d\n",*yptr);
	int temp = *xptr;
	*xptr = *yptr;
	*yptr = temp;
	printf("value of x After swapping is : %d\n",*xptr);
	printf("value of y After swapping is : %d\n",*yptr);
}

