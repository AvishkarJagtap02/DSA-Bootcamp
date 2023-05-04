// Quick Sort 
#include<stdio.h>
void swap(int *a , int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int arr[], int start, int end) {
	int pivot = arr[end], itr = start-1;
	for(int i = start ; i<end; i++) {
		if(arr[i]<pivot) {
			itr++;
			swap(&arr[i],&arr[itr]);
		}
	}
	swap(&arr[itr+1],&arr[end]);
	return (itr+1);
}
void quickSort(int arr[],int start, int end) {
	if(start<end) {
		int pivot = partition(arr,start,end);
		quickSort(arr,start,pivot-1);
		quickSort(arr,pivot+1,end);
	}
}
void main() {
	int size;
	printf("Enter size of Array: \n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter Array Elements: \n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	int start=0, end = size-1;
	printf("\nArray before Sort : \n");
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}

	quickSort(arr,start,end);
	
	printf("\nArray After Sort : \n");
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}
