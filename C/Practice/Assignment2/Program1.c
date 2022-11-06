#include<stdio.h>
void main() {
	int rows,start,end;
	printf("Enter Start\n");
	scanf("%d",&start);
	printf("Enter end\n");
	scanf("%d",&end);

	for(int i=start;i<=end;i++) {
		if(i%2==0) {
			printf("%d ",(i*i*i));
		}else {
			printf("%d ",i);
		}
	}
	printf("\n");
}

