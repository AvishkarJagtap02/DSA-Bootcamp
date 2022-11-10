#include<stdio.h>
#include<string.h>
char *mystrlwr(char *str) {
	while(*str != '\0') {
		if(*str >= 65 && *str<=90) {
			*str+=32;
		}
		str++;
	}return str;
}
void main() {
	char str[20] = {'A','v','I','s','H','k','A','r','\0'};
	
	puts(str);

	mystrlwr(str); 	
	
	puts(str);
}
