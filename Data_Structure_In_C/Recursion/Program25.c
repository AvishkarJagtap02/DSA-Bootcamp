#include<stdio.h> 
#include<stdbool.h>
bool IsPalindrome(char arr[],int start,int end) {
	if(start<end) {
		if(arr[start] == arr[end]) {
			IsPalindrome(arr,start+1,end-1);
		}else {
			return false;
		}
	}return true;
}
void main() {
	int size = 5,end = size-1;
	char arr[] = {'m','a','d','a','m'};
	bool flag = IsPalindrome(arr,0,end);
	if(flag) {
		printf("Palindrome!!!\n");
	}else {
		printf("Not a Palindrome!!!\n");
	}
}
