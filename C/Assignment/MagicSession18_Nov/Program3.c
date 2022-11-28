#include<stdio.h>
#include<stdlib.h>
void main() {
	int rows,cols;
	printf("Enter rows\n");
	scanf("%d",&rows);
	printf("Enter cols\n");
	scanf("%d",&cols);
	int **marks = (int **)malloc(rows*cols*sizeof(int));
	for(int i = 0; i<rows*cols; i++) {
			scanf("%d",&*(*marks+i));
		
	}
	for(int i = 0; i<rows*cols; i++) {
		
			printf("%d",*(*marks+i));
		
	}
}

