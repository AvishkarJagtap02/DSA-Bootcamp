//Leaders in Array
//Carry Forward Approach
//{16,17,4,3,5,2};
#include<stdio.h>
#include<stdlib.h>
void findLeaders(int arr[],int size) {
	int max = arr[size-1];
	printf("%d ",max);
	for(int i=size-2;i>=0;i--) {
		if(arr[i]>max) {
			printf("%d ",arr[i]);
			max = arr[i];
		}
	}
	printf("\n");

}
void main() {
        int arr[] = {16,17,4,3,5,2};
        int size = sizeof(arr)/sizeof(arr[0]);
        findLeaders(arr,size);
}
