//Enum
#include<stdio.h>
enum Partners {
	Sandesh,
	Ayush,
	Suraj,
	Suyog,
	Omkar
};
void main() {
//	enum Partners obj = {"Core2Web","Biencaps","Boompanda"};
	enum Partners obj;
	printf("%ld\n",sizeof(obj));
	//Acessing Enum Elements
	printf("%d\n",Sandesh);
	printf("%d\n",Suyog);
//	printf("%d\n",Core2Web); 
}
