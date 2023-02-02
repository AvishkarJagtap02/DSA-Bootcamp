//Finding FirstOccurrence using BinarySearch key = 4
// 0  1  2  3  4  5  6  7  8  9  10 11  12
//{2, 3, 3, 4, 4, 4, 4, 5, 6, 7, 8, 11, 18}
#include<stdio.h>
#include<stdlib.h>
int BinarySearch(int arr[] , int size, int key) {
	int start = 0,end = size-1;

	while(start<=end) {
		int mid = (start+end)/2;
		if(arr[mid] == key) {
			if(arr[mid-1]!=key) {
				return mid;
			}
			end = mid - 1;
		}if(arr[mid] < key) {
			start = mid+1;
		}if(arr[mid]>key) {
			end = mid - 1;
		}
	}return -1;
}
void main() {
	int size,key;
	printf("Enter Size\n");
	scanf("%d",&size);
	int arr[size]; 
	printf("Enter Array Elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter Key\n");
	scanf("%d",&key);
	int p = BinarySearch(arr,size,key);
	if(p==-1) {
		printf("Element not exits in the array!!!\n");
		exit(0);
	}
	printf("first occurrence of %d is present in the array at index : %d\n",key,p);
}



