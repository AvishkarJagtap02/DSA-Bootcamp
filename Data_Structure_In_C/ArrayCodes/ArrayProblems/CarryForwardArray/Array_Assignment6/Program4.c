//Leaders in Array
//Brute Force Approach
//{16,17,4,3,5,2};
#include<stdio.h>
#include<stdlib.h>
int *findLeaders(int arr[],int size,int *count) {
	for(int i=0;i<size;i++) {
		int j;
		for(j=i+1;j<size;j++) {
			if(arr[i]<arr[j]) {
				break;
			}
		}
		if(j == size) {
			(*count)++;
		}
	}
	int *res = (int*)calloc(*count,sizeof(int));
	int p = 0;
	for(int i=0;i<size;i++) {
		int j;
		for(j=i+1;j<size;j++) {
			if(arr[i]<arr[j]) {
				break;
			}
		}
		if(j == size) {
			res[p] = arr[i];
			p++;
		}
	}
	return res;
}
void main() {
	int arr[] = {16,17,4,3,5,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	int count = 0;
	int *p = findLeaders(arr,size,&count);
	int size1 = count;
	for(int i=0;i<size1;i++) {
		printf("%d ",p[i]);
	}
	printf("\n");
	free(p);
}
