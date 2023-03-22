//Given an array print all the sub arrays
#include<stdio.h>
void main() {
	int arr[] = {4,2,1,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++) {
		for(int j=i;j<size;j++) {
			for(int k=i;k<=j;k++) {
				printf("%d ",arr[k]);
			}
			printf("\n");
		}
	}
}


