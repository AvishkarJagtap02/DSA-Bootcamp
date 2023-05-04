#include <stdio.h>

int main() {
    int matrix[3][3] = {0};
    int i, j, num;

    printf("Enter 9 numbers separated by spaces:\n");

    for (i = 0; i < 9; i++) {
        scanf("%d", &num);
        matrix[i / 3][i % 3] = num;
    }

    printf("Input matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Output matrix:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            if (i+j >= 2 && i+j <= 4 && j <= i) {
                printf("%d ", matrix[i-j][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}

