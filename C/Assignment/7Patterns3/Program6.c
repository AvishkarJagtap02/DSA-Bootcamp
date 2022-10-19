#include<stdio.h>
void main() {
	int n;
	printf("Enter no. of rows\n");
	scanf("%d",&n);

	int x = 1,y=2,z=3;
	for(int i=1;i<=n;i++) {
		for(int j = 1;j<=n;j++) {
			if(i==1 || i==4 || i == 7 || i==10){
				printf("= ");
			}else if(i==2 || i == 5 || i== 8 || i==11){
				printf("$ ");
			}else {
				printf("@ ");
			}
		}
		printf("\n");
	}
}
