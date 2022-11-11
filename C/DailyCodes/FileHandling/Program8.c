#include<stdio.h>
void main() {
	FILE *fp = fopen("Info.txt","w");
	printf("%ld\n",ftell(fp)); //0
	fprintf(fp,"Core2web");
	printf("%ld\n",ftell(fp)); //8
	rewind(fp);
	fprintf(fp,"Biencaps");
	printf("%ld\n",ftell(fp));
}
