//Rightmax Array
#include<stdio.h>
#include<stdlib.h>
int *RightMaxArray(int arr[],int n) {
	int *RightMax = (int*)calloc(n,sizeof(int));
	RightMax[n-1] = arr[n-1];
	for(int i=n-2;i>=0;i--) {
		if(arr[i]>RightMax[i+1]) {
			RightMax[i] = arr[i];
		}else {
			RightMax[i] = RightMax[i+1];
		}
	}
	return RightMax;
}
void main() {
	int arr[] = {5,-2,4,1,7,6,3,0};
	int size = sizeof(arr)/sizeof(arr[0]);
	int *res = RightMaxArray(arr,size);
	for(int i=0;i<size;i++) {
		printf("%d ",res[i]);
	}
	printf("\n");

}

