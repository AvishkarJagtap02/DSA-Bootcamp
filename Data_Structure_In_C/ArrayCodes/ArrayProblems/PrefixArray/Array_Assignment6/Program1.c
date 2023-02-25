// Even numbers in Range
//{1 ,2, 3, 4, 5}
#include<stdio.h>
void findEvenCount(int A[],int start , int end) {
	int even_Count = 0;
	for(int i=start;i<=end;i++) {
		if(A[i]%2==0) {
			even_Count++;
		}
	}printf("%d ",even_Count);

}
void main() {
	int A[] = {2,1,8,3,9,6};
	int size1 = sizeof(A)/sizeof(A[0]);
	int Q = 4;
	int B[][2] = {{0,3},
		       {3,5},
		       {1,3},
		       {2,4}};
	int size2 = Q;
	for(int i=0;i<size2;i++) {
		findEvenCount(A,B[i][0],B[i][1]);
	}
	printf("\n");
}
