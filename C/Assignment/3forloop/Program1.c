#include<stdio.h>
void main() {
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	
	int rem=0,sum = 0,temp=n;
	for(;n>0;) {
		rem = n%10;
		sum = sum + rem;
		n=n/10;
	}
	if(sum%3==0) {
		printf("%d is multiple of 3\n",temp);
	}else {
		printf("%d is not multiple of 3\n",temp);
	}
}
		
