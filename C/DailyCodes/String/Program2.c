#include<stdio.h>
void main() {
	char *str = "Virat";
	printf("%c\n",str[2]); //r
	str[2] ='k';
	printf("%c\n",str[2]);	//segmentation fault (data placed at wrong address)
}
