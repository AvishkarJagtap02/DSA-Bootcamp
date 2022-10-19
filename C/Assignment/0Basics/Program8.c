#include<stdio.h>
void main() {
	char ch;
	printf("Enter a character\n");
	scanf("%c",&ch);

	if(ch>='A' && ch<='Z') {
		printf("%c is in UPPERCASE\n",ch);
	}else {
		printf("%c is in lowercase\n",ch);
	}
}

