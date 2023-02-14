// part of merge sort 
#include<stdio.h>
void merge_sort(int arr[],int start,int size) {
	int end = size-1;
	if(start<end) {
		int mid = start+(end-start)/2;
		merge_sort(arr,start,mid);
		merge_sort(arr,mid+1,end);
		printf("%d\n",mid);
	}
}
void main() {
	int arr[] = {7,1,4,-5,-3,10,8,9,3,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	merge_sort(arr,0,size);
}
