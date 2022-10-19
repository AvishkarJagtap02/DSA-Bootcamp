#include<stdio.h>
void main() {
	int x,y,z;
	printf("Enter 3 Numbers\n");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);

	if(x>y && x>z) {
		printf("%d is greater number\n",x);
	}else if(y>x && y>z) {
		printf("%d is greater number\n",y);
	}else if(y==x && y==z) {
		printf("All three are Equal numbers\n",);
	}else {
		printf("%d is greater number\n",z);
	}
}




