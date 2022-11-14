//fgets  and fputs
#include<stdio.h>
void main() {
	FILE *fp = fopen("sucess.txt","r");
	
	printf("%c\n",fgetc(fp));
	printf("%c\n",fgetc(fp));

	fclose(fp);

	printf("%c\n",fgetc(fp));
}

