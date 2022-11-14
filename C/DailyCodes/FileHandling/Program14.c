//putw & getw
#include<stdio.h>
void main() {
	FILE *fp = fopen("sucess.txt","r");
	
	char compName[20];
	fgets(compName,12,fp);
	puts(compName);
}

