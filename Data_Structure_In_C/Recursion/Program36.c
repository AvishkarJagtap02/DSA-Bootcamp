#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
int i=0;
bool mynstrcmp(char *str1,char *str2,int n) {
	if(i==n) {
		return true;
	}
	if(str1[i]==str2[i]) {
		i++;
		mynstrcmp(str1,str2,n);
	}else {
		return false;
	}
}
void main() {
	char str1[20];
	char str2[20];
	int n;
	printf("Enter String1 \n");
	scanf("%[^\n]s",str1);
	getchar();
	printf("Enter String2 \n");
	scanf("%[^\n]s",str2);
	printf("Enter how many Number of characters you want to check\n");
	scanf("%d",&n);
	if(mynstrcmp(str1,str2,n)) {
		printf("characters in given range is Same\n");
	}else {
		printf("characters in given range is Not Same\n");
	}
}
