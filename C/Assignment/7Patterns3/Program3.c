#include<stdio.h>
void main() {
	int n;
	printf("Enter no. of rows\n");
	scanf("%d",&n);

	for(int i=1;i<=n;i++) {
		int x=n;
		char c = 'a';
		for(int j = 1;j<=n;j++) {
			if(j%2!=0){
				printf("%d " , x);
				x--;
			}else {
				printf("%c " , c);
				c++;
			}
		}
		printf("\n");
	}
}



