//Finding element which occurs only once where others occurs twice using binary search
//  0 1 2 3 4 5 6 7 8
// {1,1,2,2,3,3,4,5,5}
#include<stdio.h>
#include<stdlib.h>		
int OccursOnce(int arr[],int size) {
	int start = 0 , end = size-1;
	if(end == 0) {
		return arr[end];
	}
	if(arr[0] != arr[1]) {
		return arr[start];
	}if(arr[end]!=arr[end-1]) {
		return arr[end];
	}
	while(start<=end) {
		int mid = start + (end-start) /2;
		if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]) {
			return arr[mid];
		}
		if((mid%2)==0 && (arr[mid]==arr[mid+1]) || ((mid%2)==1 && arr[mid]==arr[mid-1])) {
			start = mid + 1;
		}else {
			end = mid - 1;		
		}
	}return -1;
}
void main() {
	int size;
	printf("Enter size of array\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Array Elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	int x = OccursOnce(arr,size);
	if(x==-1) {
		printf("Element Not Exist\n");
	}else {
		printf("%d occurs only once\n",x);
	}
}
