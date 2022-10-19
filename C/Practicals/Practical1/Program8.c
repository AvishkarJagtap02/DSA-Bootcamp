#include<stdio.h>
void main() {
	int a,b,c;
	printf("Enter 1st angle\n");
	scanf("%d",&a);
	printf("Enter 2nd angle\n");
	scanf("%d",&b);
	printf("Enter 3rd angle\n");
	scanf("%d",&c);

	if(a+b+c == 180) {
		printf("Triangle is Valid\n");
	}else {
		printf("Triangle is InValid\n");
	}
}


