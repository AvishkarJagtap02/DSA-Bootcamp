#include<stdio.h>
void main() {
	int x,rem,sum=0,temp;
	printf("Enter a number\n");
	scanf("%d",&x);
	temp = x;
	while(x!=0) {
		rem = x%10;
		sum = sum + rem;
		x=x/10;
	}
	printf("The sum of digits is %d \n",sum);
}

