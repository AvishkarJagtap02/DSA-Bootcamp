#include<stdio.h>
void main() {
	char name[10];
	printf("Enter String:\n");
	//scanf("%s",name);
	scanf("%[^\n]",name);	//Illeagal way Dont use
	printf("%s\n",name);
}
