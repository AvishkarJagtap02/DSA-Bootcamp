//row wise sum
#include <stdio.h>
#include<stdlib.h>
int* row_Sum(int rows,int cols,int arr[rows][cols]) {
	int *res = (int*)calloc(cols,sizeof(int));
	for(int i = 0;i < rows; i++) {
		int sum =  0;
		for(int j=0;j<cols;j++) {
			sum = sum + arr[i][j];
		}
		res[i] = sum;
	}return res;
}
void main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;

    printf("Original matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int *p = row_Sum(rows,cols,arr);
    printf("Column-wise sum:\n");
    for (int i = 0; i < rows; i++) {
        printf("%d ",p[i]);
    }
    printf("\n");
}

