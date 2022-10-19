#include<stdio.h>
#include <stdbool.h>
void main() {
	int size,s = 0;
	bool flag = false;
	printf("Enter size\n");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter element to search\n");
	scanf("%d",&s);

	for(int i=0;i<size;i++) {
		if(arr[i]==s) {
			flag = true;
		}
	}
	if(flag==true) {
		printf("found!\n");
	}else {
		printf("Not Found!\n");
	}
}

