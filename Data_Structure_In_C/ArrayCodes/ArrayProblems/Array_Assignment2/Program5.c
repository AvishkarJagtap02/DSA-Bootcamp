/*
1 2 3
4 5 6 
7 8 9

1 0 0
2 4 0
3 5 7
6 8 0
9 0 0
*/

#include<stdio.h>
void main() {
	int n;
	printf("Enter the size of  the matrix\n");
	scanf("%d",&n);
	int arr[n][n];
	printf("Enter array elements \n");
	for(int i = 0;i < n; i++) {
		for(int j=0; j < n; j++) {
			scanf("%d",arr[i][i]);
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j=0; j < n; j++) {
			if(j<i) {
				arr[i][j] = 0;
		}
	}
	for(int i = 0;i < n; i++) {
		for(int j=0; j < n; j++) {
			scanf("%d ",arr[i][i]);
		}
	}
	printf("\n");
}

