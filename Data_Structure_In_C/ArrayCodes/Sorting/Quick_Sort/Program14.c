//print mid of array after sorting it by quick sort
//{3,-2,-3,7,4,5}
#include<stdio.h>
void swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int arr[],int start,int end) {
	int pivot = arr[end],itr=start-1;
	for(int i=start;i<end;i++) {
		if(arr[i]<pivot) {
			itr++;
			swap(&arr[i],&arr[itr]);
		}
	}
	swap(&arr[itr+1],&arr[end]);
	return (itr+1);
}
void quickSort(int arr[],int start,int end) {
	if(start<end) {
		int pivot = partition(arr,start,end);
		quickSort(arr, start,pivot-1);
		quickSort(arr,pivot+1,end);
	}
}

void main() {
	int arr[] = {3, -2, -3, 7, 4, 5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int start = 0 , end = size-1;
	quickSort(arr,start,end);
	printf("Sorted Array\n");
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n%d\n",arr[(start+end)/2]);
}
