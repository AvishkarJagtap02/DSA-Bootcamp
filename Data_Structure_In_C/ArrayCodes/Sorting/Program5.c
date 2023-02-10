//sort array elements by the number of factors it have
#include<stdio.h>
void swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int no_of_Factors(int n) {
	int count=0;
	for(int i=1;i<=n;i++) {
		if(n%i==0) {
			count++;
		}
	}
	return count;
}
void Bubble_Sort(int arr[],int size) {
	for(int i=0;i<size-1;i++) {
		for(int j=0;j<size-i-1;j++) {
			if(no_of_Factors(arr[j])>no_of_Factors(arr[j+1])) {
				swap(&arr[j],&arr[j+1]);
			}else if(no_of_Factors(arr[j])==no_of_Factors(arr[j+1])) {
				if(arr[j]>arr[j+1]) {
					swap(&arr[j],&arr[j+1]);
				}
			}
		}
	}
}
void main() {
	int arr[] = {5,17,9,13,20,12};
	int size = 6;
	Bubble_Sort(arr,size);
	printf("The sorted Array is : \n");
	for(int i = 0; i< size ; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}

