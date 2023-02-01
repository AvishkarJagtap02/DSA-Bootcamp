#include<stdio.h>
#include<stdlib.h>
int count = 0;
int printSteps(int n) {
	while(n!=0) {
		if(n%2==0) {
			n=n/2;
			count++;
		}else {
			n=n-1;
			count++;
		}
	}
	return count;
}
void main() {
	int n;
	if(n == 0) {
		printf("steps : %d\n",count);
		exit(0);
	}

	printf("Enter Number\n");
	scanf("%d",&n);
	int steps = printSteps(n);
	printf("steps : %d\n",steps);
}
