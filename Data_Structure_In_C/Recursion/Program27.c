//with Recursion
#include<stdio.h>
int count = 0;
int countZeroes(int n) {
	if(n == 0) {
		return count;
	}
	if(n%10 == 0)  {
		count++;
		countZeroes(n=n/10);
	}else {
		countZeroes(n = n/10);
	}
	return count;
}
void main() {
	int n;
	printf("Enter Number\n");
	scanf("%d",&n);
	if(n==0) 
		printf("count = %d",count);
	int zero = countZeroes(n);
	printf("no of zeroes are : %d\n",count);
}
