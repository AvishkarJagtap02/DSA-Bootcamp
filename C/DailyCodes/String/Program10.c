#include<stdio.h>
#include<string.h>
int mystrlen(char *str) {
	int count = 0;
	while(*str!='\0') {
		count++;
		str++;
	}
	return count;
}
void main() {
	char name[10] = {'K','L','R','a','h','u','l','\0'};
	char *str = "Virat Kohali";

	printf("%d\n",mystrlen(lenName));
	printf("%d\n",mystrlen(lenStr));
}
