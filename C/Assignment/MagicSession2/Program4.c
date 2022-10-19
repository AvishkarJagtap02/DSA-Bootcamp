#include<stdio.h>
void main() {
	int size;
	printf("Enter size\n");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	printf("The reverse array is :\n");
	for(int i=size-1;i>=0;i--) {
		printf("%d ",arr[i]);	
	}
	printf("\n");
}

