//Product Array Puzzle
//{1,   2,   3,  4,   5}	//arr			{5, 1, 10, 1}
//							{5, 5, 50, 50}
//							{10,50, 5, 50}
//{1,   2,   6,  24,  120}	//pProduct
//{120, 60 , 40, 30, 24} 	//o/p

#include<stdio.h>

int prod(int arr[],int res[],int start,int end) {
	int product = 1;
	for(int i = start;i<=end;i++) {
		product = product * arr[i];
	}
	return product;
}
void main() {
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	//int pProduct[size],lProduct = 1,rProduct=1,start=0,end=size-1,index=-1;
	int res[size];
	for(int i=0;i<size;i++) {
		if(i==0) {
			res[i] = prod(arr,res,i+1,size-1);
		}else if(i==size-1) {
			res[i] = prod(arr,res,0,i-1);
		}else {
			res[i] = prod(arr,res,0,i-1) * prod(arr,res,i+1,size-1);
		}
	}
	for(int i=0;i<size;i++) {
		printf("%d ",res[i]);
	}
	printf("\n");
}

