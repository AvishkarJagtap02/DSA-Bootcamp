//Leftmax Array
#include<stdio.h>
#include<stdlib.h>
int *LeftMaxArray(int arr[],int size) {
	int *LeftMax = (int*)calloc(size,sizeof(int));
	LeftMax[0] = arr[0];
	for(int i=1;i<size;i++) {
		if(arr[i]>LeftMax[i-1]) {
			LeftMax[i] = arr[i];
		}else {
			LeftMax[i] = LeftMax[i-1];
		}
	}
	return LeftMax;
}
void main() {
	int arr[] = {5,-2,4,1,7,6,3,0};
	int size = sizeof(arr)/sizeof(arr[0]);
	int *res = LeftMaxArray(arr,size);
	for(int i=0;i<size;i++) {
		printf("%d ",res[i]);
	}
	printf("\n");

}

