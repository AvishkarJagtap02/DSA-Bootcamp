#include<stdio.h>
#include <stdbool.h>
void main() {
	int size;
	printf("Enter size\n");
	scanf("%d",&size);
	int arr1[size];
	int arr2[size];
	printf("Enter elements in the first array\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr1[i]);
	}
	printf("Enter elements in the second array\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr2[i]);
	}
	for(int i=0;i<size;i++) {
		printf("Addtion of element at index %d in array1 and element at index %d in array2 is %d\n",i,i,(arr1[i]+arr2[i]));
	}
}

