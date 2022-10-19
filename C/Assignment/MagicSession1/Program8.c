#include<stdio.h>
void main() {
	int r;
	printf("Enter no . of rows\n");
	scanf("%d",&r);
	int p=0,q=1,s=0;
	for(int i=1;i<=r;i++) {
		for(int j=1;j<=i;j++) {
				printf("%d\t",s);
				p=q;
				q=s;
				s=p+q;
		}
		printf("\n");
	}
}
