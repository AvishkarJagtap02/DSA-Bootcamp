//Finding index of element of rotated array using BinarySearch key = 5
// 0  1  2   3  4  5  6   0  1  2  3  4  5  6  7  8  9
//{8, 9, 10, 4, 5, 6, 7} {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
#include<stdio.h>
#include<stdlib.h>
int BinarySearch(int arr[] , int size, int key,int start,int end) {
	while(start<=end) {
		int mid = (start+end)/2;
		if(arr[mid] == key) {
			return mid;
		}if(arr[mid] < key) {
			start = mid+1;
		}if(arr[mid]>key) {
			end = mid - 1;
		}
	}return -1;
}
int findRotated(int arr[],int size,int key) {
	int start = 0,end = size-1,index=0;
	while(start<=end) {
		int mid = start+end/2;
		if(start == end) {
			index = start;
		}
		if(arr[mid] < arr[mid+1]) {
			start = mid+1;
		}
	}
	//int max = 0,index =0;
	/*for(int i = 0; i < size; i++) {
		if(arr[i] > max) {
			max = arr[i];
			index = i;
		}
	}*/
	if(key > arr[size-1]) {
		BinarySearch(arr,size,key,0,index);
	}else if(arr[index]==arr[size-1]){
		BinarySearch(arr,size,key,0,size-1);
	}else {
		BinarySearch(arr,size,key,index+1,size-1);
	}
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
	int p = findRotated(arr,size,key);
	if(p==-1) {
		printf("Element not exits in the array!!!\n");
		exit(0);
	}
	printf("first occurrence of %d is present in the array at index : %d\n",key,p);
}



