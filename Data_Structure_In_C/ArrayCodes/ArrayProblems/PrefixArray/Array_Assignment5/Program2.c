//Equillibrium index of the array
//{-7,  1,  5, 2, -4, 3, 0}	//arr
//{-7, -6, -1, 1, -3, 0, 0}	//pSum
#include<stdio.h>
void main() {
	int arr[] = {-7,1,5,2,-4,3,0};
	int size = sizeof(arr)/sizeof(arr[0]);
	int pSum[size],lSum = 0,rSum=0,start=0,end=size-1,index=-1;

	pSum[0] = arr[0];
	for(int i=1;i<size;i++) {
		pSum[i] = pSum[i-1] + arr[i];
	}
	for(int i=0;i<size;i++) {
		if(i==0 || i == size-1) {
			continue;
		}else {
			lSum = pSum[i-1];
			rSum = pSum[end] - pSum[i];
			if(lSum==rSum) {
				index = i;
			}	
		}
	}
	printf("%d\n",index);
}
