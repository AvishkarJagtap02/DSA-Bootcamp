#include<stdio.h>
void main() {
	int r;
	printf("Enter no . of rows\n");
	scanf("%d",&r);

	for(int i=1;i<=r;i++) {
		char ch = 64+r+i-1;
		for(int j=1;j<=r;j++) {
			if((i%2==0 && j%2==0)|| (i%2!=0 && j%2!=0)) {
				printf("%c\t",ch);
			}else {
				printf("%c\t",ch+32);
			}
			if(i%2!=0) {
				ch++;
			}else {
				ch--;
			}
		}
		printf("\n");
	}
}
