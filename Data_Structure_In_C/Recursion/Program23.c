#include<stdio.h>
int searchEle(char arr[],int size,char ch) {
	if(size<=0) {
		return -1;
	}
	if(arr[size-1] == ch) {
		return 0;
	}
	else {
		return searchEle(arr,size-1,ch);
	}
}
void main() {
	int size = 5;
	char arr[] = {'A','B','C','D','E'};
	char ch = 'D';
	if(searchEle(arr,size,ch) == 0) {
		printf("Found\n");
	}else {
		printf("Not found\n");
	}
}
