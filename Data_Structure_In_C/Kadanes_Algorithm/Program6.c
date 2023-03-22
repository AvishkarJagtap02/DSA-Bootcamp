// Kadanes Algorithm 
// To Calculate the max from all subarrays addition

#include<stdio.h> 
void main() {
	int arr[] = {4,2,1,3};
	int size = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0];
	int sum = 0;
	for(int i=0;i<size;i++) {
		sum = sum + arr[i];
		if(sum<0) {
			sum = 0;
		}
		if(max<sum) {
			max = sum;
		}
	}
	printf("Max : %d\n", max);
}

