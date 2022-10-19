#include<stdio.h>
void main() {
	int x,rem,count=0,temp;
	printf("Enter a number\n");
	scanf("%d",&x);
	temp = x;
	while(x!=0) {
		rem = x%10;
		count++;
		x=x/10;
	}
	printf("The number of digits in %d is %d \n",temp,count);
}

