#include<stdio.h>
void main() {
	int sum=0,x;
	float average;
	printf("Enter numbers\n");
	for(int i=1;i<=10;i++) {
		scanf("%d",&x);
		sum = sum+x;
	}
	average = sum / 10;
	printf("Sum  = %d ",sum);
	printf("average = %f ",average);
	printf("\n");
}
