#include<stdio.h> 
int FirstOcc(int arr[],int size,int key) {
	int start = 0,end = size-1;
	while(start<=end) {
		int mid = start + (end - start)/2;
		if((mid == 0 || arr[mid-1] < key) && arr[mid] == key) {
			return mid;
		}else if(key > arr[mid]) {
			start = mid + 1;
		}else {
			end = mid - 1;
		}
	}
	return -1;
}
int LastOcc(int arr[],int size,int key) {
	int start = 0,end = size-1;
	while(start<=end) {
		int mid = start + (end - start)/2;
		if((mid == size-1 || arr[mid+1] > key) && arr[mid] == key) {
			return mid;
		}else if(key > arr[mid]) {
			start = mid + 1;
		}else {
			end = mid - 1;
		}
	}
	return -1;
}

int *getArr(int arr[],int size,int key) {
	int start = 0,end = size-1;
	static int arr1[] = {-1,-1};
	arr1[0] = FirstOcc(arr,size,key);
	arr1[1] = LastOcc(arr,size,key);
	return arr1;		
}
void main() {
        int size,key;
        printf("Enter Size\n");
        scanf("%d",&size);

        int arr[size];

        printf("Enter array Elements\n");
        for(int i=0;i<size;i++) {
                scanf("%d",&arr[i]);
        }
	printf("Enter Key\n");
	scanf("%d",&key);
	int *res = getArr(arr,size,key);
	for(int i=0;i<2;i++) {	
		printf("%d ",res[i]);
	}
	printf("\n");

}
