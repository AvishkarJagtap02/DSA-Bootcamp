#include<stdio.h>
#include<stdbool.h>
int count = 0,i=0;
bool IsSorted(int arr[] , int size ) {
	if(size>=i) {
		if(arr[i]<=arr[i+1]) {
			i++;
			IsSorted(arr,size);
		}else {
			return false;
		}
	}else if(i>size){
		return true;
	}else {
		return false;
	}
}
void main() {
	int size = 0;
	printf("Enter the size of the array\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter Array Elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	bool flag = IsSorted(arr,size-1) ;
	if(flag == true) {
		printf("Array is Sorted\n");
	}else {
		printf("Array is Not Sorted\n");
	}
}

