#include<stdio.h>
#include<stdbool.h>
bool IsPalindrome(char arr[],int size) {
	int x = 0,y = size-1;
	while(x<=y) {
		if(arr[x]==arr[y]) {
			x++;
			y--;
		}else {
			return false;
		}
	}
	return true;
}
void main() {
	int size=5;
	char arr[] = {'m','a','d','a','m'};
	bool flag = IsPalindrome(arr,size);
	if(flag) {
		printf("Yes it is Palindrome!!!\n");
	}else {
		printf("No it is not a Palindrome!!!\n");
	}
}

