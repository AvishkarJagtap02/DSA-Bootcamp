#include<stdio.h>
void main() {
	int a , b;
	printf("Enter starting\n");
	scanf("%d",&a);
	printf("Enter Ending\n");
	scanf("%d",&b);

	printf("Even Numbers: ");
	for(int i=b;i>=a;i--) {
		if(i%2==0) {
			printf("%d ",i);
		}
	}
	printf("\n");
	printf("odd Numbers: ");
	for(int i=a;i<=b;i++) {
		if(i%2!=0) {
			printf("%d ",i);
		}
	}
	printf("\n");
}


