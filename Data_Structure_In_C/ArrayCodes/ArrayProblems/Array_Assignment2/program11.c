//print diagonalwise addition in another array
//[1 2 3]
//[4 5 6]
//[7 8 9]
#include <stdio.h>

#define ROWS 3
#define COLS 3

int colWiseSum(int arr[][COLS],int rows, int cols) {

    	int sum = 0;	
	for (int i = 0; i < rows; i++) {
        	for (int j = 0; j < cols; j++) {
        	    if(i==j) 
			sum += arr[i][j];
        	}
    	}
	return sum;	
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int colSum[COLS] = {0};
    int sum = colWiseSum(arr, ROWS, COLS);
    printf("%d\n", sum);
   

    return 0;
}

