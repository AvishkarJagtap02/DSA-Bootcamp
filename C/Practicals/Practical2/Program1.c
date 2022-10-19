
#include<stdio.h>
void main() {
	int x,sum=0;
	printf("Enter a number\n");
	scanf("%d",&x);

	for(int i=0;i<=x;i++) {
		if(i%3!=0) {
			sum = sum + i;
		}
	}
	printf("sum of number is not divisible by 3 is : %d \n",sum);
}

