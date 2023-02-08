//Finding floor of a number using LinearSearch
#include<stdio.h>
#include<stdlib.h>
int floor_Number(int arr[] , int size, int key) {
	if(arr[0] > key) {
		return -1;
	}
	if(arr[size-1]<key) {
	       return arr[size-1];
	}	       
	for(int i=0;i<size;i++) {
		if(arr[i] == key) {
			return arr[i];
		}if(arr[i]>key) {
			return arr[i-1];
		}
	}return -1;
}
void main() {
	int size,key;
	printf("Enter Size\n");
	scanf("%d",&size);
	int arr[size]; 
	printf("Enter Array Elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter Key\n");
	scanf("%d",&key);
	int p = floor_Number(arr,size,key);
	if(p==-1) {
		printf("Element not exits in the array!!!\n");
		exit(0);
	}
	printf("floor : %d\n",p);
}



