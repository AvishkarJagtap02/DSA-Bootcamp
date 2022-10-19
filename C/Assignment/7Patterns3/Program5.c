#include<stdio.h>
void main() {
	int n;
	printf("Enter no. of rows\n");
	scanf("%d",&n);

	int x = 1;
	for(int i=1;i<=n;i++) {
		for(int j = 1;j<=n;j++) {
			if(i%2!=0 && j%2==0 || i%2==0 && j%2!=0){
				printf("%d " , (x*x));
				x++;
			}else {
				printf("%d " , x);
				x++;
			}
		}
		printf("\n");
	}
}



