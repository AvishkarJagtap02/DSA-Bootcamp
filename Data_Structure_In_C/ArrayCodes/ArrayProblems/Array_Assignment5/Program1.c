//prefix Array
#include<stdio.h>
void main() {
	int arr[] = {-7,11,21,-4,-3,5,8,2,-12};
	int size = sizeof(arr)/sizeof(arr[0]);
	int pSum[size];
	pSum[0] = arr[0];
	for(int i=1;i<size;i++) {
		pSum[i] = pSum[i-1] + arr[i];
	}
	for(int i=0; i<size; i++) {
		printf("%d ",pSum[i]);
	}
	printf("\n");
}
