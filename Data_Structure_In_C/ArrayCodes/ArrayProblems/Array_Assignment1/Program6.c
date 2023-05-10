
//123 = 1^3 + 2^3 + 3^3 == 123; 

#include<stdio.h>
#include<stdbool.h>
int countDigits(int n) {
	int count = 0;
	while(n!=0) {
		int rem = n%10;
		count++;
		n=n/10;
	}
	printf("Count = %d",count);
	return count;
}
int calculate(int rem, int count) {

	int mul=1;
	for(int i=1;i<=count;i++) {
		mul = mul * rem;
	}
	return mul;
}
void IsArmstrong(int n) {
	printf("Inside IsArmStrong Function\n");
	int temp = n,mul=1,sum = 0;
	int count = countDigits(n);
	while(n!=0) {
		printf("Inside While\n");
		int rem = n%10;
		int mul = calculate(rem,count);
		sum = sum + mul;
		n=n/10;
	}
 		
	if(sum == temp) {
		printf("yes Armstrong\n");
	}else {
		printf("Not Armstrong\n");
	}
}
void main() {
	int n ;
	printf("Enter A Number\n");
	scanf("%d",&n);
 	IsArmstrong(n);
	printf("Bye!!\n");
}
