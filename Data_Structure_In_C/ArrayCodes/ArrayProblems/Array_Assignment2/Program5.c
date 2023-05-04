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
/*
#include<stdio.h>
void main() {
	int n;
	printf("Enter the size of  the matrix\n");
	scanf("%d",&n);
	int arr[n][n];
	int x = 0;
	printf("Enter array elements \n");
	for(int i = 0;i < n; i++) {
		for(int j=0; j < n; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j=0; j < n; j++) {
			if(i+j == x) {
				printf("%d ",arr[i][j]);
			}else {
				printf("0 ");
			}	
		}
		x++;
		printf("\n");
	}		
	for(int i = 0;i < n; i++) {
		for(int j=0; j < n; j++) {
			printf("%d ",arr[i][i]);
		}
	}
	printf("\n");
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int matrix[3][3] = {0};  // initialize matrix with zeros
    char input[50];
    char *token;
    int i, j;

    printf("Enter 9 numbers separated by spaces:\n");
    fgets(input, 50, stdin);

    token = strtok(input, " ");
    i = j = 0;
    while (token != NULL && i < 3 && j < 3) {
        matrix[i][j] = atoi(token);
        j++;
        if (j == 3) {
            i++;
            j = 0;
        }
        token = strtok(NULL, " ");
    }

    printf("Input matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Output matrix:\n");
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            if (i <= j) {
                printf("%d ", matrix[i+j][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}

