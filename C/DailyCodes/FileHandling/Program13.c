//putw & getw
#include<stdio.h>
void main() {
	FILE *fp = fopen("abc.txt","w+");
	int num1 = 10;
	int num2 = 20;
	printf("%ld\n",ftell(fp)); 	//0
	
	putw(num1,fp);
	putw(num2,fp);

	printf("%ld\n",ftell(fp)); //8
	
	rewind(fp);

	printf("%ld\n",ftell(fp)); //0

	printf("%d\n",getw(fp));
	printf("%d\n",getw(fp));
}

