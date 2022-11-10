//Bitfield with pragma pack
#include<stdio.h>
#pragma pack(1)
struct Demo{
	int x:1;
	int y:2;
}obj;
void main() {
	printf("%ld\n",sizeof(obj));
}
