
// { 15, 10, 18, 5 } 
// { 10, 18, 15, 5 }
#include<stdio.h>
void swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}	
void SortArr(int arr[],int size) {
	for(int i=0;i<size;i++) {
		for(int j=0;j<size-i-1;j++) {
			if(arr[j]<arr[j+1]) {
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
	for(int i=0;i<size;i++) {
		for(int j=0;j<size-i-1;j++) {
			if(arr[j]%2!=0) {
				swap(&arr[j],&arr[j+1]);
			}
		}
	}	
	for(int i=0;i<size;i++) {
		for(int j=0;j<size-i-1;j++) {
			if(arr[j]%2==0) {
				if(arr[j]%5!=0 && arr[j+1]%2==0){
					swap(&arr[j],&arr[j+1]);
				}else {
					break;
				}
			}
		}
	}
	for(int i=0;i<size;i++) {
		for(int j=0;j<size-i-1;j++) {
			if(arr[j]%2!=0) {
				if(arr[j]%5==0 && (arr[j]<arr[j+1])){
					swap(&arr[j],&arr[j+1]);
				}
			}
		}
	}
}
void main() {
	int arr[] = {15,10,18,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	SortArr(arr,size);
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}
