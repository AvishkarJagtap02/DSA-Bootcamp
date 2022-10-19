#include<stdio.h>
void main() {
	int s,e;
	printf("Enter start\n");
	scanf("%d",&s);
	printf("Enter end\n");
	scanf("%d",&e);

	for(int i=e;i>=s;i--) {
		if(i%2==0) {
			printf("%d ",i);
		}
	}
	printf("\n");
	for(int i = s;i<=e;i++) {
		if(i%2!=0) {
			printf("%d ",i);
		}
	}
	printf("\n");
}
	


