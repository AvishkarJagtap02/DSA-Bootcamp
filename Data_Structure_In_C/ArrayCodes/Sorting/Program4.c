//sort the array of strings containing strings and integers sort it alphabetically by using bubble sort
#include<stdio.h>
#include<string.h>
void swap(char** str1,char** str2) {
	char* temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}
void BubbleSort(char** arr,int size) {
	for(int i = 0;i<size-1;i++) {
		for(int j=0;j<size-i-1;j++) {
			if(strcmp(arr[j],arr[j+1])>0) {
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}
void main() {
	char* arr[] = {"Ashish","Rahul","Raj","Anuj","Shashi"};
	int size = sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,size);
	printf("The sorted Array is :\n");
	for(int i=0;i<=size-1;i++) {
		printf("%s\n",arr[i]);
	}	
	printf("\n");
}

