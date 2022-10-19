#include<stdio.h>
void main() {

	int num;
	char chr;
	float rs;
	double crMoney;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("Enter a Character\n");
	scanf(" %c",&chr);
	printf("Enter rs in float\n");
	scanf("%f",&rs);
	printf("Enter crMoney \n");
	scanf("%lf",&crMoney);

	printf("num = %d\n",num);
	printf("chr = %c\n",chr);
	printf("rs = %.2f \n",rs);
	printf("crmoney = %6lf \n",crMoney);
}
