#include<stdio.h>
struct Core2Web {
	char sub[15];
	float fees;
	int duration;
}obj2 = {"Java",8000.00,3};
void main() {
	struct Core2Web batch2= {"Bootcamp",8000.00,4};
	printf("%s\n",obj2.sub);
	printf("%f\n",obj2.fees);
	printf("%d\n",obj2.duration);

	printf("%s\n",batch2.sub);
	printf("%f\n",batch2.fees);
	printf("%d\n",batch2.duration);
}


