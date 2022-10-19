#include<stdio.h>
void main() {
	int n;
	printf("Enter no. of rows\n");
	scanf("%d",&n);

	int x = 1;
	char c = 'D';
	for(int i=1;i<=n;i++) {
		for(int j = 1;j<=n;j++) {
		        if(i%2!=0) {	
				printf("%d\t",x);
				x++;
			}else {
				if(i%2==0) {
					printf("%d\t",x);
					if(j==n) {
						x++;
					}
					else {
						x--;
					}
				}
			}
		}
		printf("\n");
	}
}
