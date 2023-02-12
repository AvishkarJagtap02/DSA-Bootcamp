//program to swap in range
#include<stdio.h>
int swap(int arr[],int start,int end) {
	int temp = 0;
	temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	
}
void main() {
	int size,start = 0,end = 0;
	printf("Enter size \n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter start\n");
	scanf("%d",&start);
	printf("Enter end\n");
	scanf("%d",&end);
	swap(arr,start,end);
	for(int i=0;i<size;i++) {
		printf("%d\n",arr[i]);
	}
}
