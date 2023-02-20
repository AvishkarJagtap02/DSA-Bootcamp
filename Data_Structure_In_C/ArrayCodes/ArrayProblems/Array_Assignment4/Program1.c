// printing numbers which are greater than itself in the array
#include<stdio.h>
void main() {
	int size = 8;
	int arr[] = {7,3,-2,7,4,5,7,4}; 
	int count = 0;
	for(int i=0;i<size;i++) {
		int x = arr[i];
		for(int j=0;j<size;j++) {
			if(x<arr[j]) {
				count++;
				break;
			}
		}
	}
	printf("count : %d\n",count);
}

