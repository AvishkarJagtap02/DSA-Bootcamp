#include<stdio.h>
void main() {
	int n;
	printf("Enter no of rows\n");
	scanf("%d",&n);
	int x =1 ;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			if(j%2==0){
				printf("%d\t",x);
				x++;
			}else {
				printf("%d\t",(x*x));
				x++;
			}	
		}
		printf("\n");
	}
}

