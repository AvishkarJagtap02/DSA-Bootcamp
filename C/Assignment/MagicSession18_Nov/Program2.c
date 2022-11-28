#include<stdio.h>
#include<stdlib.h>
void main() {
	int size = 5;
	int *marks = (int *)malloc(size*sizeof(int));
	for(int i = 0; i<size; i++) {
		scanf("%d",&marks[i]);
	}
	for(int i = 0; i<size; i++) {
		printf("%d\n",marks[i]);
	}
}

