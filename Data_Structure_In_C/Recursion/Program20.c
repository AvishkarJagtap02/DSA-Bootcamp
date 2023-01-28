#include<stdio.h>
int sumArr(int arr[],int size) {
	int sum = 0;
	for(int i=0;i<size;i++) {
		sum = sum + arr[i];
	}
	return sum;
}
void main() {
	int size = 5;
	int arr[] = {1,2,3,4,5};
	int sum = sumArr(arr , size);
	printf("%d\n",sum);
}
