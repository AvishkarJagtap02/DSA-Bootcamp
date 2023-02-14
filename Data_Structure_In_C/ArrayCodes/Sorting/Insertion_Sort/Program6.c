//insertion sort
#include<stdio.h>
int Insertion_Sort(int arr[],int size) {
	for(int i=1;i<size;i++) {
		int val = arr[i];
		int j= i -1 ;
		for(;j>=0 && arr[j] > val;j--) {
			arr[j+1] = arr[j];	
		}
		arr[j+1] = val;
	}
}
void main() {
	int size;
	printf("Enter Size\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Array Elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	Insertion_Sort(arr,size);
	printf("Array after sort\n");
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}	


