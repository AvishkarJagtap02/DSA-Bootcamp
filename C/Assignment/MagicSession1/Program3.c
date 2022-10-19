#include<stdio.h>
void main() {
	int s,e;
	printf("enter start\n");
	scanf("%d",&s);
	printf("enter end\n");
	scanf("%d",&e);
	for(int i=s;i<=e;i++) {
		for(int j=2;j<i;j++) {
			if(i%j==0) {
				printf("%d ",i);
				break;
			}
		}
	}
	printf("\n");
}
