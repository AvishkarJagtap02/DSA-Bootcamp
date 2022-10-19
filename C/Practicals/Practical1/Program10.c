#include<stdio.h>
void main() {
	char ch1,ch2;
	printf("Enter 1st Character\n");
	scanf(" %c",&ch1);
	
	printf("Enter 2nd Character\n");
	scanf(" %c",&ch2);

	if(ch1==ch2) {
		printf("1st character is : %c\n",ch1);
		printf("2nd character is : %c\n",ch2);
	}else {
		if(ch1>ch2) {
			printf("difference is %d\n",(ch1-ch2));
		}else {
			printf("difference is %d\n",(ch2-ch1));
		}
	}

}

