#include<stdio.h>
int PairCount(int arr[],int size,int sum) {
	int pcount=0;
	for(int i= 0; i<size/2;i++) {
		for(int j=size;j>i;j--) {
			if(arr[i]+arr[j]==sum) {
				pcount++;
			}
		}
	}
}
void main() {
	int size;
	printf("Enter Size of array\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Elements of Array\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	int sum=0;
	printf("Enter sum\n");
	scanf("%d",&sum);
	int pcount = PairCount(arr,size,sum);
	printf("pair count having sum %d is %d \n",sum , pcount);
}

