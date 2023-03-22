//Given an array print sum of every single sub arrays using two for loops
#include<stdio.h>
void main() {
	int arr[] = {4,2,1,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++) {
		int sum = 0;
		for(int j=i;j<size;j++) {
			sum = sum + arr[j];
			printf("%d ",sum);
			printf("\n");
		}
	}
}


