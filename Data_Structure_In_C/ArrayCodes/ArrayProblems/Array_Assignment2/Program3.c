//diagonal wise sum
#include <stdio.h>
#include<stdlib.h>
int diagonal_Sum(int rows,int cols,int arr[rows][cols]) {
	int sum = 0;
	for(int i = 0;i < rows; i++) {
		for(int j=0;j<cols;j++) {
			if(i==j) {
				sum = sum + arr[i][j];
			}
		}
	}return sum;
}
void main() {        
    int arr[3][3] = {{2, 2, 3}, 
	            { 2, 2, 3}, 
		    { 3 ,3, 2}};
    int rows = 3, cols = 3;
    printf("Original matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum = diagonal_Sum(rows,cols,arr);
    printf("diagonal sum:\n");
    printf("%d\n",sum);
}

