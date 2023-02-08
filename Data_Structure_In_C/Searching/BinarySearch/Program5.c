//Finding floor  using BinarySearch   
#include<stdio.h>
#include<stdlib.h>
int Ceiling_BinarySearch(int arr[] , int size, int key) {
	int start = 0,end = size-1,store = -1;
	while(start<=end) {
		int mid = (start+end)/2;
		if(arr[mid] == key) {
			return arr[mid];
		}if(arr[mid] < key) {
			store = arr[mid];
			start = mid+1;
		}if(arr[mid]>key) {
			end = mid - 1;
		}
	}return store;
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
	int p = Ceiling_BinarySearch(arr,size,key);
	if(p==-1) {
		printf("Floor not Found!!!\n");
		exit(0);
	}
	printf("Floor : %d\n",p);
}



