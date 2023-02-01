//Finding elements using linear search
#include<stdio.h>
int isPresent(int arr[] , int size, int key) {
	for(int i=0;i<size;i++) {
		if(arr[i] == key) {
			return i;
		}
	}
	return -1;
}
int lastocc(int arr[],int size,int key) {
	int lastocc = -1;
	for(int i=0;i<size;i++) {
		if(arr[i] == key) {
			lastocc = i;
		}
	}
	return lastocc;
}
int slastocc(int arr[],int size,int key) {
	int lastocc = -1,slast=-1;
	for(int i=0;i<size;i++) {
		if(arr[i] == key) {
			slast = lastocc;
			lastocc = i;
		}
	}
	return slast;
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
	int p = isPresent(arr,size,key);
	int locc = lastocc(arr,size,key);
	int slocc = slastocc(arr,size,key);
	printf("%d is present in the array at index : %d\n",key,p);
	printf("last occurrence of %d at index : %d\n",key,locc);
	printf("second last occurrence of %d at index : %d\n",key,slocc);
}



