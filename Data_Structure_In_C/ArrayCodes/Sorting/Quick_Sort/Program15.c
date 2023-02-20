//quick sort using haore's approach
//{3,2,-3,1,6,9,4}
#include<stdio.h>
void swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int arr[],int start,int end) {
	int pivot = arr[start];
	int i = start-1 , j = end+1;
	
	while(1) {
		do {
			i++;
		}while(arr[i]<pivot);
		do {
			j--;
		}while(arr[j]>pivot);
		if(i>=j) {
			return j;
		}
		swap(&arr[i],&arr[j]);
	}
}
void quickSort(int arr[],int start,int end) {
	if (start >= end) {
     	   return;
    	}
	int pivot = partition(arr,start,end);
	quickSort(arr,start,pivot);
	quickSort(arr,pivot+1,end);
}
void main() {
	int arr[] = {4,2,7,9,5,3,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	int start = 0,end = size-1;
	quickSort(arr,start,end);
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}
		
