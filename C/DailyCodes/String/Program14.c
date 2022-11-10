#include<stdio.h>
#include<string.h>
char *mystrcat(char *str1 ,  char *str2) {
	while(*str1 != '\0') {
		str1++;
	}while(*str2 != '\0') {
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1='\0';
	puts(str1);
	puts(str2);
	return str1;
}
void main() {
	char str1[20] = {'A','v','i','s','h','k','a','r','\0'};
	char *str2 = "Jagtap";
	
	puts(str1);
	puts(str2);

	mystrcat(str1,str2); 	
	
	puts(str1);
	puts(str2);
}
