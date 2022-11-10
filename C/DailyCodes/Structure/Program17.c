//Bitfield
#include<stdio.h>
struct Demo{
	char ch;
	int x:1;
	int y;
}obj;
void main() {
	printf("%ld\n",sizeof(obj));
}
