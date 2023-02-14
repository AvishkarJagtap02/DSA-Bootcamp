//Addition of Two Arrays 
#include<stdio.h> 
void AdditionOfArray(int arr1[],int arr2[],int size) {
	printf("Addition of Array\n");
	for(int i=0;i<size;i++) {
		arr1[i] = arr1[i] + arr2[i];
		printf("%d ",arr1[i]);
	}
	printf("\n");
}	
void main() {
	int size = 4;
	int arr1[] = {8,5,3,7};
	int arr2[] = {2,10,4,6};
	AdditionOfArray(arr1,arr2,size);
}

