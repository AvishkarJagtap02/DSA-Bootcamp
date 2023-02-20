//print columnwise addition in another array
//[1 2 3]
//[4 5 6]
//[7 8 9]
/*
[12, 13, 18]
#include<stdio.h>
int *col_wise_Addition(int[][3] arr,int rows,int cols) {
	int arr1[] = malloc(cols*sizeof(int));
	for(int j=0;j<cols;j++) {
		int sum = 0;
		for(int j=0;i<cols;j++) {
			if(j==0) {
				sum=sum+arr[i];
			}
		}
		arr1[j] = sum;
	}
	return arr1;
}
void main() {
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int size = sizeof(arr)/sizeof(arr[0]);
	int *x = col_wise_Addition(arr,3,3);
	printf("Column wise Addition is: \n");
	for(int i=0;i<size;i++) {
		printf("%d",x[i]);
	}
}*/
#include <stdio.h>

#define ROWS 3
#define COLS 3

void colWiseSum(int arr[][COLS], int result[], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += arr[i][j];
        }
        result[j] = sum;
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int colSum[COLS] = {0};
    colWiseSum(arr, colSum, ROWS, COLS);

    printf("Column-wise sum: ");
    for (int j = 0; j < COLS; j++) {
        printf("%d ", colSum[j]);
    }
    printf("\n");

    return 0;
}

