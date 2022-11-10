#include<stdio.h>
struct Demo {
	int x;
	float y;
};
void main() {
	struct Demo obj = {10,20.5f};
	int arr[] = {10,20,30,40,50};

	printf("%p\n",&arr[0]);
	printf("%p\n",arr);

	printf("%p\n",&obj.x);
	printf("%p\n",obj);
	printf("%p\n",&obj);
}

