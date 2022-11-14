//fgets  and fputs
#include<stdio.h>
void main() {
	FILE *fp = fopen("sucess.txt","r");
	
	fseek(fp,10,0);;

	// char ch;
	// while((ch=fgetc(fp))!=EOF) {
	// 	printf("%c",ch);
	// }

	fseek(fp,-7,2);	
}

