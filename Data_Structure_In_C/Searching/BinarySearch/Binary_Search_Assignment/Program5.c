//Finding index of element if present and if not then returning index if it would be if it were inserted 
//  0 1 2 3 
// {1,3,5,7}	key = 6 -> o/p: 3
#include<stdio.h>
#include<stdlib.h>
int Search(int arr[],int size,int key) {
	int start = 2 , end = 3, store = -1,mid = 2;
	while(start<=end) {
		int mid = start + (end-start)/2;
		if(start==end) {
			return start;
		}
		if(arr[mid]==key) {
			return mid;
		}
		if(arr[mid]<key) {
			start = mid + 1;
		}if(arr[mid]>key) {
			int store = mid;
			end = mid - 1;		
		}
	}return store;
}
void main() {
	int size,key;
	printf("Enter size of array\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Array Elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter key to search its index\n");
	scanf("%d",&key);

	int x = Search(arr,size,key);
	if(x==-1) {
		printf("Not Exist\n");
	}else {
		printf("Element occurs at index %d\n",x);
	}
}
