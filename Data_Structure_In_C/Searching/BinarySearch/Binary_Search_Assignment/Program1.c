//Floor 
//	 0 1 2 3 4 5
//arr = {1,2,3,5,7,9}
#include<stdio.h>
#include<stdlib.h>
int Floor(int arr[], int size, int key) {
	
	int start = 0,end = size-1,store = -1;
	while(start<=end) {
		int mid = (start+end)/2;
		if(arr[mid]==key) {
			return arr[mid];
		}if(arr[mid]<key) {
			store = arr[mid];
			start = mid+1;
		}if(arr[mid]>key) {
			end = mid-1;
		}
	}return store;
}
void main() {
	int size,key;
	printf("Enter size of the array\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Elements of the array\n");
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter key\n");
	scanf("%d",&key);
	int x = Floor(arr,size,key);
	if(x==-1) {
		printf("Element not Found!!!\n");
		exit(0);
	}
	printf("Floor : %d\n",x);
}
