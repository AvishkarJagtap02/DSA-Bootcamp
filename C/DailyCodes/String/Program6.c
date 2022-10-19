#include<stdio.h>
void main() {
	char cName[] = {'v','i','r','a','t','\0'};
	char *fName1 = "Messi";
	char *fName2 = "NeymarJr";
	char *fName3 = "Messi";

	printf("%p\n%p\n",fName1,fName3);
}
