#include<stdio.h> 
int fact(int n) {
	int facto = 1;
	for(int i=1;i<=n;i++) {
		facto = facto*i;
	}
	return facto;
}
void main() {
	int a,b;
	printf("Enter first number\n");
	scanf("%d",&a);
	printf("Enter first number\n");
	scanf("%d",&b);

	printf("%d + %d = %d\n",a,b,(fact(a)+fact(b)));
}

