#include<stdio.h> 
void PrintString(char str1[]);
void stringPrint(char *str2);
void main() {

	char arr[20];
	printf("Enter PlayerName:\n");
	gets(arr);
	PrintString(arr);
	stringPrint(arr);
}
void PrintString(char str1[]) {
	puts(str1);
}
void stringPrint(char *str2) {
	puts(str2);
}
