//Given an array print Maxsum of sub arrays
#include<stdio.h>
void main() {
	int arr[] = {4,2,1,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	int maxSum = 0;
	for(int i=0;i<size;i++) {
		for(int j=i;j<size;j++) {
			int sum = 0;
			for(int k=i;k<=j;k++) {
				sum = sum + arr[k];
			}
			if(sum>maxSum) {
				maxSum = sum;
			}
		}
	}
	printf("maxSum = %d",maxSum);
	printf("\n");
}


