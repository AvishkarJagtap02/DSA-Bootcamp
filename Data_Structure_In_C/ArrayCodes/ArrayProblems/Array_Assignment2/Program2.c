#define ROWS 3
#define COLS 3
#include<stdio.h>
void ColumnWiseSum(int arr[][COLS],int result[cols],int rows,int cols) {
	for(int j=0;j<cols;j++) {
		int sum = 0;
		for(int i=0;i<rows;i++) {
			sum = sum + arr[i][j];
		}
		result[j] = sum; 
	}
}
void main() {
	int arr[ROWS][COLS] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int result[COLS] = {0};
	ColumnWiseSum(arr,result,ROWS,COLS);
	printf("Column Wise Sum : ");
	for(int j=0;j<COLS;j++) {
		printf("%d ",result[j]);
	}
}

