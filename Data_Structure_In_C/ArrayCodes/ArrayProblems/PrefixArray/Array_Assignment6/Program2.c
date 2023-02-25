
//{1 2 3  4  5}
//{1 3 6 10 15}
// {0 3} -> [10]
// {1,2} -> [5]
#include<stdio.h>
#include<stdlib.h>
void findSum(int pArr[],int start,int end) {
		if(start == 0) {
			printf("%d ",pArr[end]);
		}else {
			printf("%d ",pArr[end] - pArr[start-1]);
		}
}
int *pSum(int arr[], int size) {
	int *pArr = (int*)calloc(size,sizeof(int));
	pArr[0] = arr[0];
	for(int i=1;i<size;i++) {
		pArr[i] = pArr[i-1] + arr[i];
	}
	return pArr;
}
void main() {
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int *pArr = pSum(arr,size);
	int B[][2] = {{0,3},
		      {1,2}}; 
	int size1 = 4;
	for(int i=0;i<size1/2;i++) {
		findSum(pArr,B[i][0],B[i][1]);
	}
	printf("\n");
}	
