#include<stdio.h>
int sumOfDiagonals1(int **ptr,int row,int col){
	int sum = 0;
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			sum = sum + *(*(ptr+i)+j);
		}
	}
	return sum;
}
/*int sumOfDiagonals2(int **ptr , int arrSize) {
	int sum = 0;
	for(int i=0;i<arrSize;i++) {
		sum = sum + *(*ptr+i);
	}
	return sum;
}*/
void main() {
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int arrSize = sizeof(arr) / sizeof(int);
	int s1 = sumOfDiagonals1(&arr,3,3);
//	int s2 = sumOfDiagonals2(arr,arrSize);
	printf("sum with 3 arguments %d\n",s1);
	//printf("sum with two parameters %d\n",s2);
}
