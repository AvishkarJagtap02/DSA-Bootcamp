//Program to check entered input is digit or alphabet or special character
#include<stdio.h>
void main() {

	char ch;
	printf("Enter input\n");
	scanf("%c",&ch);
	
	if((ch>='A' && ch<='Z') || (ch>='a' &&ch<='z')) {
		printf("Entered input is alphabet\n");
	}else if(ch>='1' && ch<='9') {
		printf("Entered input is Digit\n");
	}else {
		printf("Entered input is special character\n");
	}
}
