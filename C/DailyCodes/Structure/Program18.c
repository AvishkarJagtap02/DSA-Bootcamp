//Bitfield
#include<stdio.h>
struct Demo{
	int x:1;
	int y:2;
}obj;
void main() {
	printf("%ld\n",sizeof(obj));
}
