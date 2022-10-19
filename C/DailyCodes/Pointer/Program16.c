#include<stdio.h> 
int sumArr1(int *ptr,int arrSize) {
	int sum = 0;
	for(int i=0;i<arrSize;i++) {
		sum = sum + (*ptr+i);
	}
	return sum;
}
void main() {
	int arr[] = {10,20,30,40,50};
	int arrSize = sizeof(arr)/sizeof(int);
	int sum = sumArr1(arr,arrSize);
	printf("sum = %d\n",sum);
}
