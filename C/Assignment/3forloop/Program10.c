#include<stdio.h>
void main() {
	int a,b;
	printf("Enter start and end range\n");
	scanf("%d",&a);
	scanf("%d",&b);

	int p=1;
	for(int i=a;i<=b;i++) {
		float c = (flioat)p/i;
		printf("%d = %.2f\n",i,c);
	}
}

