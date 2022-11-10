#include<stdio.h>
struct Netflix { 
	char username[20];
	int accounts;
	float price;
};
void main() {
	struct Netflix obj1= {"Avishkar Jagtap",4,149.00};
	struct Netflix obj2;
	char str[20];
	gets(str);
	strcpy(obj2.username,str);
	printf("Enter Number of accounts\n");
	scanf("%d",&obj2.accounts);
	printf("Enter subscription price\n");
	scanf("%f",&obj2.price);

	printf("%s\n",obj1.username);
	printf("%d\n",obj1.accounts);
	printf("%f\n",obj1.price);

	printf("%s\n",obj2.username);
	printf("%d\n",obj2.accounts);
	printf("%f\n",obj2.price);
}


