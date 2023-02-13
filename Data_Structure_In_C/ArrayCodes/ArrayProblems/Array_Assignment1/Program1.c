//count the number of elemenmts which have at least one element greater than itself
#include<stdio.h>
int cntEle(int arr[],int size) {
	int max= 0 ,count = 0;
	for(int i=0;i<size;i++) {
		if(arr[i]>max) {
			max = arr[i];
		}
	}
	for(int i=0;i<size;i++) {
		if(arr[i]<max) {
			count++;
		}
	}
	return count;
}
void main() {
	int size = 3;
	int arr[] = {3,2,1};
	int x = cntEle(arr,size);
	printf("%d\n",x);
}

