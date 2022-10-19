#include<stdio.h>
void main() {
	int x,rem,product=1,temp;
	printf("Enter a number\n");
	scanf("%d",&x);
	temp = x;
	while(x!=0) {
		rem = x%10;
		product = product * rem;
		x=x/10;
	}
	printf("The product of digits is %d \n",product);
}

