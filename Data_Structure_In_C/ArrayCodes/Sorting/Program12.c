// 0  1  2   3   4  5   6  7  8  9
// 7, 1, 4, -5, -3, 10, 8, 9, 3, 2
// find kth smallest element
#include<stdio.h>
void merge(int arr[],int start,int mid,int end) {
	int ele1 = mid-start+1;
	int ele2 = end - mid;
	int arr1[ele1],arr2[ele2];
	for(int i=0;i<ele1;i++) {
		arr1[i] = arr[start+i];
	}
	for(int j=0;j<ele2;j++) {
		arr2[j] = arr[mid + j + 1];
	}
	int itr1=0,itr2=0,itr3=start;
	while(itr1<ele1 && itr2<ele2) {
		if(arr1[itr1] <= arr2[itr2]) {
			arr[itr3] = arr1[itr1];
			itr1++;
		}else {
			arr[itr3] = arr2[itr2];
			itr2++;
		}
		itr3++;
	}
	while(itr1<ele1) {
		arr[itr3] = arr1[itr1];
		itr1++;
		itr3++;
	}
	while(itr2<ele2) {
		arr[itr3] = arr2[itr2];
		itr2++;
		itr3++;
	}	
}
void mergeSort(int arr[],int start,int end) {
	if(start<end) {
		int mid = (start + end) / 2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}
int kth_smallest_element(int arr[],int size,int k) {

	int start = 0,end = size-1;
	mergeSort(arr,start,end);
	printf("\n=======================================\n");
	printf("Array After Sort\n");
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n=======================================\n");
	if(k>size-1 || k<0) {
		return -1;
	}
	return arr[k-1];
}
void main() {
	int arr[] = {7,1,4,-5,-3,10,8,9,3,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	int k=0;
	printf("Enter K\n");
	scanf("%d",&k);
	printf("\n=======================================\n");
	printf("Array Before Sort\n");
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n=======================================\n");
	int x = kth_smallest_element(arr,size,k);
	if(x == -1) {
		printf("Element Not Found!!!");
	}else {
		printf("Kth smallest Element is: \n");
		printf("%d ",x);
	}
	printf("\n=======================================\n");
}
