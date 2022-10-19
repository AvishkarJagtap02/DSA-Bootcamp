#include<stdio.h>
void main() {
	char carr[] = {'C','o','r','e','2','w','e','b'};
	char *str = "Core2web";

	printf("%s\n",carr);	//Core2web
	printf("%s\n",str);	//Core2web

	carr[4] = '3';
	*str = 'B';

	printf("%s\n",carr);	//Core3web
	printf("%s\n",str);	//segmentation fault
}
