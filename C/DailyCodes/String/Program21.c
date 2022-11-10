//Array of character pointers
#include<stdio.h>
#include<string.h>
void main() {
	char *arr[3] = {"Ashish","Kanha","Ashish"};
	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);
	printf("%p\n",arr[2]);

	puts(arr[0]);
	printf("%s\n",arr[2]);
	strcpy(arr[2],"Rahul");

	puts(arr[0]);
	printf("%s\n",arr[2]);
}
