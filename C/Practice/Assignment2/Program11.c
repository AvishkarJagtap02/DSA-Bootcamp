#include<stdio.h>
void main() {
	int rows,x=1,cols;
	char ch='a',s='#';
	printf("Enter number of rows\n");
	scanf("%d",&rows);
	printf("Enter number of columns\n");
	scanf("%d",&cols);
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<=cols;j++) {
			if(i%2==0) {
				printf("%c\t",ch);
				ch++;
			}else if(i%3==0){
				printf("%c\t",s);
			}else {
				printf("%d\t",x);
				x++;
			}
		}
		printf("\n");
	}
}

