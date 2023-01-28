#include<stdio.h>
int sumArr(int arr[],int size) {
	if(size == 0) {
		return arr[size];
	}
	return sumArr(arr,size-1) + arr[size-1];
}
void main() {
	int size = 5;
	int arr[] = {1,2,3,4,5};
	int sum = sumArr(arr , size);
	printf("%d\n",sum);
}
