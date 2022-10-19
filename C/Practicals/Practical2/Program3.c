#include<stdio.h>
void main() {
	int n,sum=0,count=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	
	printf("The divisors are : ");
	for(int i=1;i<=n;i++) {
		if(n%i==0) {
			printf(" %d ",i);
			count++;
			sum = sum+i;
		}
	}printf("\n");
	printf("The count of divisors are : %d \n",count++);
	printf("Additions of divisors : %d \n", sum);
}
	
