#include<stdio.h>
void main() {
	int x;
	printf("Enter a mnumber\n");
	scanf("%d",&x);
	int i = 0,j=1,k=i+j;
	printf("%d ",i);
	printf("%d ",j);
	while(k<=x) {
		printf("%d ",k);
			i=j;
			j=k;
			k=i+j;
	}
}
	//0 1 1 2 3 5 8
