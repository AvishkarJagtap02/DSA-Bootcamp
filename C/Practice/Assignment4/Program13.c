#include<stdio.h>
void main() {
	int fact = 1,start,end;
	printf("Enter a start\n");
	scanf("%d",&start);
	printf("Enter a end\n");
	scanf("%d",&end);

	for(int i=start;i<=end;i++) {
		fact=1;
		for(int j=1;j<=i;j++) {
			fact =fact*j;
		}
		printf("factorial of %d is %d \n",i,fact);
	}
}
