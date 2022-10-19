#include<stdio.h>
#include <stdbool.h>
void main() {
	int size,even_count = 0,odd_count = 0;
	printf("Enter size\n");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++) {
		if(arr[i]%2==0) {
			even_count++;
		}else {
			odd_count++;
		}
	}
		printf("Even numbers count = %d\n",even_count);
		printf("odd Numbers count = %d\n",odd_count);
}

