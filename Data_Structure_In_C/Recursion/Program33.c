#include<stdio.h>
#include<stdbool.h>
int count = 0,i=0;
bool IsVerify(int arr[] , int size , int count) {
	if(count>=2) {
		return true;
	}
	if(size>=i) {
		if(arr[i]%2==0) {
			i++;
			IsVerify(arr,size,count+=1);
		}else {
			i++;
			IsVerify(arr,size,count);
		}
	}else {
		return false;
	}
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
	bool flag = IsVerify(arr,size-1,0) ;
	if(flag == true) {
		printf("Array has 2 or more than 2 Even Numbers\n");
	}else {
		printf("Array Has less than 2 Even Numbers\n");
	}
}

