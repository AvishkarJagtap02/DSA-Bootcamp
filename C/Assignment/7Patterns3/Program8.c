#include<stdio.h>
void main() {
	int n;
	printf("Enter no. of rows\n");
	scanf("%d",&n);

	int x = 16;
	char c = 'P';
	for(int i=1;i<=n;i++) {
		for(int j = 1;j<=n;j++) {
			if(i%2==0){
				printf("%c\t",c);
				c--;
				x--;
			}else {
				printf("%d\t",x);
				x--;
				c--;
			}
		}
		printf("\n");
	}
}
