//fgets  and fputs
#include<stdio.h>
void main() {
	FILE *fp = fopen("sucess.txt","a");
	
	char compName[20] = "unacademy";
	fputs(compName,fp);
}

