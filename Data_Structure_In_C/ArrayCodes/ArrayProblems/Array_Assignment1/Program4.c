//program to reverese the array 
#include<stdio.h>
int* reverse(int arr[],int start,int end) {
	while(start<end) {
		int temp = 0;
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	return arr;
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
	reverse(arr,0,size-1);
	printf("Reversed array is:\n");
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}
