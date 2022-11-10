#include<stdio.h> 
void main() {
	char arr[10];
	printf("Enter PlayerName:\n");
	gets(arr);

	puts(arr);
	char *str = arr;
	puts(str);
}
