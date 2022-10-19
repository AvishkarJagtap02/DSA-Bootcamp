#include<stdio.h>
int size,arr[]={};
void fun() {
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	printf("Enter the array elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
}
void main() {
	fun();
	printf("Array Elements are\n");
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}
