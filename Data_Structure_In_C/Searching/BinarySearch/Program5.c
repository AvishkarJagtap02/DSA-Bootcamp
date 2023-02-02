//Finding floor  using BinarySearch    key = 12
// 0   1   2   3   4   5    6    7    8
//{2 , 4 , 6 , 7 , 8 , 10 , 11 , 13 , 15}
#include<stdio.h>
#include<stdlib.h>
int Floor_BinarySearch(int arr[] , int size, int key) {
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
	int p = Floor_BinarySearch(arr,size,key);
	if(p==-1) {
		printf("Floor not Found!!!\n");
		exit(0);
	}
	printf("floor : %d\n",p);
}



