#include<stdio.h>
void main() {
        int a , b;
        printf("Enter starting\n");
        scanf("%d",&a);
        printf("Enter Ending\n");
        scanf("%d",&b);

	for(int i=a;i<=b;i++) {
		if(i%5 == 0) {
			printf("%d ",i);
		}
	}printf("\n");
}

