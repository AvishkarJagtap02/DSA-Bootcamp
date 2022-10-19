#include<stdio.h>
void main() {
	int x;
	printf("Enter Number\n");
	scanf("%d",&x);
	int arr[11];
	for(int i=1;i<=10;i++) {
		arr[i] = (x*i);
	}
	int *ptr = &arr[0];
	for(int i=1;i<=11;i++) {
		printf("%d ",(*ptr));
		ptr++;
	}
	printf("\n");
}
