//selection sort
// 0  1  2  3  4
//{5, 3, 2, 7, 1}
#include<stdio.h>
int selectionSort(int arr[],int size) {
	int temp = 0;
	for(int i=0;i<size-1;i++) {
		int min_Index = i; 
		for(int j=i+1;j<size-i-1;j++) {
			if(arr[min_Index]>arr[j]) {
				min_Index = j;
			}
		}	
		temp = arr[i];
		arr[i] = arr[min_Index];
		arr[min_Index] = temp;
	}			
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void main() {
	int size;
	printf("Enter Size\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Array Elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	selectionSort(arr,size);
}	


