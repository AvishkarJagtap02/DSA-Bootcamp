//sort the array of strings by its length using bubble sort
#include<stdio.h>
#include<string.h>
void swap(char* str1,char* str2) {
	char temp[100];
	strcpy(temp,str1);
	strcpy(str1,str2);
	strcpy(str2,temp);
}
int mystrlen(char* str) {
	int count =0;
	while(*str!='\0') {
		count++;
		str++;
	}
	return count;
}
void BubbleSort(char arr[][100],int size) {
	for(int i = 0;i<size-1;i++) {
		for(int j=0;j<size-i-1;j++) {
			if(mystrlen(arr[j])>mystrlen(arr[j+1])) {
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
void main() {
	char arr[][100] = {"Ashish","Rahul","Raj","Anuj","Shashi"};
	int size = sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,size);
	printf("The sorted Array is :\n");
	for(int i=0;i<=size-1;i++) {
		printf("%s\n",arr[i]);
	}	
	printf("\n");
}

