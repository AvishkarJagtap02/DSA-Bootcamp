//putw & getw
#include<stdio.h>
void main() {
	FILE *fp1 = fopen("sucess.txt","r");
	FILE *fp2 = fopen("Property.txt","w");
	char ch;
	while((ch = fgetc(fp1))!=EOF) {

		fputc(ch,fp2);
	}
}

