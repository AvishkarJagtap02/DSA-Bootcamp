#include<stdio.h>
void main() {
	int a,b,c;
	printf("Enter side 1\n");
	scanf("%d",&a);
	printf("Enter side 2\n");
	scanf("%d",&b);
	printf("Enter Hypo\n");
	scanf("%d",&c);

	if((c*c)==(a*a)+(b*b)) {
		printf("It is Pythagorean triplet\n");
	}else {
		printf("It is not Pythagorean triplet\n");
	}
}


