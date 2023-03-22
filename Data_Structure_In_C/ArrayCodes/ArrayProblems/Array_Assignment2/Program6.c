#include <stdio.h>
int main() {
   int n, i, j;
   printf("Enter the size of square matrix: ");
   scanf("%d", &n);
   int matrix[n][n];
   printf("Enter the elements of matrix:\n");
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &matrix[i][j]);
         if (j > i) {
            matrix[i][j] = 0; // set elements above the diagonal to zero
         }
      }
   }
   printf("The matrix is:\n");
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         if (j > i) {
            printf("0 ");
         } else {
            printf("%d ", matrix[i][j]);
         }
      }
      printf("\n");
   }
   return 0;
}

