#include<stdio.h>
struct cricPlayer {
	int jerNo;
	float avg;
	char grade;
};
void main() {
	struct cricPlayer vk;
	printf("%ld\n",sizeof(vk));	//12
	printf("%ld\n",sizeof(struct cricPlayer));//12
}
