#include<stdio.h>
void main() {
	char a , b;
	printf("Enter two characters\n");
	scanf("%c %c",&a,&b);

	if(a==b) {
		printf("both characters are same\n");
	}else {
		printf("diffrence between two characters are %d \n",(a-b));
	}
}
