//program to check if goodPair is available or not
#include<stdio.h>
int goodPair(int arr[], int size,int key) {
	for(int i=0;i<size;i++) {
		for(int j=i+1;j<size;j++) {

			if((arr[i]+arr[j])==key) {
				return 1;
			}
		}
	}return 0;
}
void main() {
	int size,key = 0;
	printf("Enter size \n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter Key\n");
	scanf("%d",&key);
	int x = goodPair(arr,size,key);
	printf("%d\n",x);
}
