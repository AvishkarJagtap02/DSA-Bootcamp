#include<stdio.h>
void main() {
	int start,end;
	printf("Enter Start\n");
	scanf("%d",&start);
	printf("Enter End\n");
	scanf("%d",&end);

	for(int i=start;i<=end;i++) {
		if(i%2!=0) {
			printf("%d = %d\n",i,(i*i));
		}
	}
}
