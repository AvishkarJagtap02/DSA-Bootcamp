#include<stdio.h>
void main() {
	int a,b,gcd,lcm;
	printf("Enter two numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);

	for(int i=1;i<=a && i<=b;i++) {
		if(a%i==0 && b%i==0)
			gcd = i;
	}lcm = (a*b)/gcd;
	printf("lcm of %d and %d is %d\n",a,b,lcm);
}


