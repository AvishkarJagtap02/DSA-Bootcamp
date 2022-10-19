#include<stdio.h>
void main() {
	int n;
	char ch='a';
	printf("Enter no of rows\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		int x =1;
		for(int j=1;j<=n;j++) {
			if(i%2==0){
				printf("%c ",ch);
				ch++;
			}else {
				printf("%d ",x);
				x++;
			}	
		}
		printf("\n");
	}
}

