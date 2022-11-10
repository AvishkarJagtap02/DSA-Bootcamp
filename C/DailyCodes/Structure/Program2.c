#include<stdio.h>
struct Demo {
	int x;
	float y;
	double z;
};
void main() {
	struct Demo obj;
	printf("%ld\n",sizeof(obj));	//16
}
