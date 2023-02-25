//print columnwise addition in another array
//[1 2 3]
//[4 5 6]
//[7 8 9]
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

