#include<stdio.h>
void main() {
	char pName[] = {'R','o','h','i','t','S','\0','V','a','d','a'};
	char *name = "ViratK";
	printf("%ld\n",sizeof(pName));	//11
	puts(pName);
	for(int i=0;i<11;i++) {
		printf("%c",pName[i]);
	}
	printf("\n");
	for(int i=0;i<7;i++) {
		printf("%c",name[i]);
	}
	printf("\n");
}

