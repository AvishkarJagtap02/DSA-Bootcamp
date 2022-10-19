#include<stdio.h>
void main() {
	int x;
	printf("Enter no .of rows \n");
	scanf("%d",&x);
	
	for(int i=1;i<=x;i++) {
		int a = x-1;
		char b = 'a';
		for(int j=1;j<=x;j++) {
			if(i%2==0 && j%2!=0) {
				printf("%c ",b);
				b++;
				a--;
			}
			else if(i%2!=0 && j%2!=0){
				printf("%d ",a);
				a--;
				b++;
			}
			else if(i%2!=0 && j%2==0){
				printf("%c ",b);
				a--;
				b++;
			}else if(i%2==0 && j%2!=0) {
				printf("%c ",b);
				a--;
				b++;
			}
			else if(i%2==0 && j%2==0) {
				printf("%d ",a);
				a--;
				b++;
			}
		}
		printf("\n");
	}
}

