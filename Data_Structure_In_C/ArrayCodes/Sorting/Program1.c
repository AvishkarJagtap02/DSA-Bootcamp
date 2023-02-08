//bubble sort
// 0  1  2  3  4
//{5, 3, 2, 7, 1}
#include<stdio.h>
int bubbleSort(int arr[],int size) {
	int temp = 0;
	for(int i=0;i<size-1;i++) {
		for(int j=0;j<size-i-1;j++) {
			if(arr[j]>arr[j+1]) {
				temp = arr[j];
			        arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void main() {
	int size;
	printf("Enter Size\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Array Elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,size);
}	


