//putw & getw
#include<stdio.h>
void main() {
	FILE *fp = fopen("sucess.txt","r");
	char ch;
	while((ch = fgetc(fp))!=EOF) {

		printf("%c",ch);
	}
}

