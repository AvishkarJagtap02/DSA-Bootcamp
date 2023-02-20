//Quick Sort by Naive Approach
//{4, 3, 7, 9, 1, 2, 5}
//{1, 2, 3, 4, 5, 7, 9}
#include<stdio.h>
int partition(int arr[],int start,int end) {
	int temp[end - start + 1];
	int pivot = arr[end];
	int index = 0;
	for(int i=start;i<end;i++) {
		if(arr[i]<pivot) {
			temp[index++] = arr[i];
		}
	}
	int pos = index+start;
	temp[index] = pivot;
	for(int i=start;i<end;i++) {
		if(arr[i]>pivot) {
			temp[index++] = arr[i];
		}
	}
	for(int i = start; i<=end ; i++) {
		arr[i] = temp[i-start];
	}
	return pos;
}
void quickSort(int arr[],int start,int end) {
	if(start<end) {
		int pivot = partition(arr,start,end);
		quickSort(arr,start,pivot-1);
		quickSort(arr,pivot+1,end);
	}
}
void main() {
	int arr[] = {4,3,7,9,1,2,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int start = 0,end = size-1;
	quickSort(arr,start,end);
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}
