#include<stdio.h>
#include<string.h>
char *mystrcpy(char *str1 , char *str2) {
	while(*str2 != '\0') {
		*str1 = *str2;
		str1++;
		str2++;
	}*str1='\0';
	return str1;
}
void main() {
	char str1[20] = {}; 
	char str2[20] = {'A','v','i','s','h','k','a','r','\0'};
	
	//int number = 5;
	mystrcpy(str1,str2);
	
	puts(str1);
	puts(str2);
}
