#include<stdio.h>
#include<stdbool.h>
int count = 0;
bool IsVerify(int arr[] , int size) {
	for(int i = 0;i<size;i++) {
		if(arr[i]%2==0) {
			count++;
		}
		if(count>=2) {
			return true;
		}
	}
	return false;
}

void main() {
	int size = 0;
	printf("Enter the size of the array\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter Array Elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	if(IsVerify(arr,size)) {
		printf("Array has 2 or more than 2 Even Numbers\n");
	}else {
		printf("Array Has less than 2 Even Numbers\n");
	}
}

