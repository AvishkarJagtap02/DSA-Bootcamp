#include<stdio.h>
#include<stdlib.h>
int steps = 0;
int printSteps(int n,int steps) {
	while(n!=0) {
		if(n%2==0) {
			printSteps(n=n/2,steps+=1);	
		}else {
			printSteps(n=n-1,steps+=1);
		}
	}
	return steps;
}
void main() {
	int n=0;
	printf("Enter Number\n");
	scanf("%d",&n);
	if(n == 0) {
		printf("steps : %d\n",steps);
		exit(0);
	}
	int step = printSteps(n,steps);
	printf("steps : %d\n",step);
}
