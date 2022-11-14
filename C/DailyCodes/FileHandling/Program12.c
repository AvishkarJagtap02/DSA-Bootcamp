//putw & getw
#include<stdio.h>
void main() {
	FILE *fp1 = fopen("sucess.txt","r");
	FILE *fp2 = fopen("Property.txt","w");
	char ch;
	int count =0;
	for(int i=1;i<=10;i++) {	
		if(((ch = fgetc(fp1))!=EOF)) {
			fputc(ch,fp2);
		}else {
			break;
		}
	}
}

