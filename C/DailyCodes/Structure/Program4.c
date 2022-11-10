#include<stdio.h>
struct Demo {
	char ch1;
	int x;
	float y;
	char arr[10];
};
void main() {
	struct Demo obj;
	printf("%ld\n",sizeof(obj));
}
