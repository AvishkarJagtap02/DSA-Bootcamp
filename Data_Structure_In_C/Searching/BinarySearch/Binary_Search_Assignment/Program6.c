//Find Peak Element (Think Once before using Binary Search)
//An Array Element is Peak if it is not smaller than its neighbours
//For Corner Elements we need to ensure that there will be only one neighbours
//We ensure that answer will be unique
//the array may have duplicate elements
//Constraints: 1<=|A|<=100000 & 1<= A[i] <= 109
//A = {1 , 2 , 3 , 4 , 5} o/p: 5       A = {5 , 17 , 100 , 11} o/p: 100
//{1,2,3,4,5,5,5,6,7,8,11,15,14,14}
#include<stdio.h>
int peak(int arr[],int start,int end,int size) {
		int mid = start + (end-start)/2;
		if((mid==0 || arr[mid-1] <= arr[mid]) && (mid == size-1 ||  arr[mid+1] <= arr[mid])) {
			return arr[mid];
		}else if(mid>0 && arr[mid]<arr[mid-1]) {
			peak(arr,start,mid -1,size);
		}else {
			peak(arr,mid + 1,end,size);
		}	
}
void main() {
	int size;
	printf("Enter Size\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter array Elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	int x = peak(arr,0,size-1,size);
	printf("Peak element is: %d\n",x);
	
}



