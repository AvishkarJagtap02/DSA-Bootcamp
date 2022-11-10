#include<stdio.h>
#include<string.h>
void main() {
	char str1[20] = {'A','v','i','s','h','k','a','r','\0'};
	char *str2 = "Jagtap";
	
	puts(str1);
	puts(str2);

	strcat(str1,str2); 	//strcat(src,dest)
	
	puts(str1);
	puts(str2);
}
