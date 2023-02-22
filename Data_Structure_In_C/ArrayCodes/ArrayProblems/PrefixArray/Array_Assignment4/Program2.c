//printing count of numbers which have numbers greter than itself in array
#include<stdio.h>
void main() {
	int size = 8;
	int arr[] = {7,3,-2,7,4,5,7,4}; 
	int maxcount = 0,max=0;
	for(int i=0;i<size;i++) {
		if(arr[i]>=max) {
			max = arr[i];
			maxcount++;
		}
	}

	int x = size - maxcount;
	printf("count : %d\n",x);
}

