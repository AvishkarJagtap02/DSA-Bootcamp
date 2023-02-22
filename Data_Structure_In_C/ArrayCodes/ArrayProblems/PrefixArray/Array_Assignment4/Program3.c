#include<stdio.h>
void main() {
	int arr[] = {4,-2,1,11,7,9,-5,4,-3,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	int start,end;
	int queries = 3;
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	for(int i=0;i<queries;i++) {
		printf("\nEnter start\n");
		scanf("%d",&start);

		printf("Enter end\n");
		scanf("%d",&end);

		int sum = 0;
		for(int i=start;i<=end;i++) {
			sum = sum + arr[i];
		}
		printf("sum for query i is : %d",sum);
	}
	printf("\n");
}

