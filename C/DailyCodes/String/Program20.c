#include<stdio.h>
void main() {
	char arr[3][10] = {"Ashish","Kanha","Rahul"};
	printf("%p\n",&(arr[1]));
	printf("%p\n",&(arr[1][1]));
	printf("%p\n",&(arr[2]));
}
