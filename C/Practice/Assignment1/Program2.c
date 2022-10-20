#include<stdio.h>
void main() {
	int start,end;
	printf("Enter Start\n");
	scanf("%d",&start);
	printf("Enter End\n");
	scanf("%d",&end);

	for(int i=end;i>=start;i--) {
		if(i%3==0 && i%7==0) {
			printf("%d ",i);
		}
	}
	printf("\n");
}
