#include<stdio.h>
void main() {
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);

	int rem=0,count = 0;
	while(n!=0) {
		int rem = n%10;
		count++;
		n=n/10;
	}
	printf("digit count is : %d\n",count);

}



