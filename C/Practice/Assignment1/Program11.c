#include<stdio.h> 
void main() {
	int rows,num=1;
	char ch='a';
	printf("Enter rows\n");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<=rows;j++) {
			if(i%2==1) {
				printf("%d\t",num);
				num++;
			}else {
				printf("%c\t",ch);
				ch++;

			}
		}
		printf("\n");
	}
}

