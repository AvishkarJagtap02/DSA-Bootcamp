#include<stdio.h>
int no;
void luckyNo() {
	printf("Enter a number\n");
	scanf("%d",&no);
}
void main() {
	luckyNo();
	printf("Lucky Number is: %d\n",no);
}
