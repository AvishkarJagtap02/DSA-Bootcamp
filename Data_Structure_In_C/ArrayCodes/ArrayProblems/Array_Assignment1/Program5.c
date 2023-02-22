//Rotation of array
// 0  1  2  3  4	
// 1, 2, 4, 6, 8
#include<stdio.h>
void swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void rotate_Arr(int arr[],int size,int k) {
	for(int i=0;i<k;i++) {
		int temp = arr[size-1];
		for(int j = size-1;j>=1;j--) {
			arr[j] = arr[j-1];
		}
		arr[0] = temp;
	}
}
void main() {
	int size,k=0;
	printf("Enter size\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Array elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);

	}
	printf("Enter No. of Rotations you want\n");
	scanf("%d",&k);
	rotate_Arr(arr,size,k);
	printf("Rotated array:\n");
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}


