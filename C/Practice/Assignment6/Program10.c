#include<stdio.h>
void main() {
	int rows;
	printf("Enter rows\n");
	scanf("%d",&rows);

	char x = 97;
	int z=1;
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<i;j++) {
			printf("\t");
		}
		for(int k=i;k<=rows;k++) {
			if(z%2==0) {
				printf("%c\t",x-32);
				x++;
			}else {
				printf("%c\t",x);
				x++;
			}
			z++;
		}
		printf("\n");
	}
}
