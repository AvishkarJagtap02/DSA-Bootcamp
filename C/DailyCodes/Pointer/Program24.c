#include<stdio.h>
int no;
void luckyNo() {
	printf("Lucky Number is: %d\n",no);
}
void main() {
	printf("Enter a number\n");
	scanf("%d",&no);
	luckyNo();
}
