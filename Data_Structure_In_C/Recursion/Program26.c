// counting no. of zeroes in numbers
#include<stdio.h>
int count = 0;
int countZeros(int n) {
	if(n==0) {
		return 1;
	}
	if(n>=1 && n<=9) {
		return 0;
	}
	int count = 0;
	while(n!=0) {
		if(n%10 == 0) {
			count++;
		}
		n=n/10;
	}
	return count;
}
void main()  {
	int n;
	printf("Enter a Number\n");
	scanf("%d",&n);
	int zero = countZeros(n);
	printf("No of Zeros : %d\n",zero);
}
