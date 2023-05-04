// merge sort 
#include<stdio.h> 
void merge(int arr[], int start, int mid ,int end) {
	int ele1 = mid - start + 1;
	int ele2 = end -mid ;

	int arr1[ele1];
	int arr2[ele2];
	
	for(int i=0; i<ele1; i++) {		
		arr1[i] = arr[start+i];
	}
	for(int j = 0; j<ele2; j++) {
		arr2[j] = arr[mid+1+j];
	}
	int itr1 = 0, itr2 = 0, itr3 = start;

	while(itr1<ele1 && itr2<ele2) {
		if(arr1[itr1] < arr2[itr2]) {
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
void mergeSort(int arr[], int start, int end) {

	if(start<end) {
		int mid = (start+end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}
void main() {
	int size;
	printf("Enter size of the array\n");
	scanf("%d",&size);
	
	int start = 0, end = size-1;
	int arr[size];
	printf("Enter Array Elements\n");
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}
	printf("\nArray Before Sort\n");
	for(int i=0; i<size; i++) {
		printf("%d ",arr[i]);
	}

	mergeSort(arr , start , end);

	printf("\nArray After Sort\n");
	for(int i=0; i<size; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}


