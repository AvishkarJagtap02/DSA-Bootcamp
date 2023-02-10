// 0  1  2  3   0  1  2  3   4
//{3, 5, 8, 7} {1, 2, 4, 6, 10}
//merge two arrays and store it in another array in sorted manner
#include<stdio.h> 
void Sort(int arr[],int size) {
	int temp = 0;
	for(int i=0;i<size;i++) {
		for(int j=0;j<size-1;j++) {
			if(arr[j]>arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}	
void Merge_Array(int arr1[],int arr2[],int arr3[],int m,int n,int size3) {
	printf("Addition of Array\n");
	int i=0,j=0,k=0;
	while(i<m && j<n) {
		if(arr1[i]<arr2[j]) {
			arr3[k++] = arr1[i++];
		}else {
			arr3[k++] = arr2[j++];
		}
	}
	while(i<m) {
		arr3[k++] = arr1[i++];
	}
	while(j<n) {
		arr3[k++] = arr2[j++];
	}

	printf(" array1\n");
	for(int p = 0;p<m;p++) {
		printf("%d ",arr1[p]);
	}
	printf("\n");
	printf("array2\n");
	for(int q = 0;q<n;q++) {
		printf("%d ",arr2[q]);
	}
	printf("\n");
	printf("merged array\n");
	for(int k = 0;k<size3;k++) {
		printf("%d ",arr3[k]);
	}
	printf("\n");
}	
void main() {
	int size1 = 4;
	int size2 = 5;
	int size3 = size1 + size2;
	int arr1[] = {8,5,3,7};
	int arr2[] = {2,10,4,6,1};
	int arr3[size3];
	Sort(arr1,size1);
	Sort(arr2,size2);
	Merge_Array(arr1,arr2,arr3,size1,size2,size3);
}

