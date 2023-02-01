#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
int i=0;
bool mystrcmp(char *str1,char *str2) {
	if(str1[i] == '\0') {
		return true;
	}
	if(str1[i]==str2[i]) {
		i++;
		mystrcmp(str1,str2);
	}else {
		return false;
	}
}
void main() {
	char str1[20];
	char str2[20];
	printf("Enter String1 \n");
	scanf("%[^\n]s",str1);
	getchar();
	printf("Enter String2 \n");
	scanf("%[^\n]s",str2);
	if(strlen(str1)!=strlen(str2)) {
		printf("Both Strings are not same\n");
		exit(0);
	}
	if(mystrcmp(str1,str2)) {
		printf("Both Strings are Same\n");
	}else {
		printf("Both Strings are Not Same\n");
	}
}
