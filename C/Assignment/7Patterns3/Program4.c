#include<stdio.h>
void main() {
	int n;
	printf("Enter no. of rows\n");
	scanf("%d",&n);

	char a = 'a';
	char temp = 'a';
	for(int i=1;i<=n;i++) {
		a = temp;
		for(int j = 1;j<=n;j++) {
			if(j%2!=0){
				printf("%c " , a);
				a++;
			}else {
				printf("%c " , (a-32));
				a++;
			}
		}
		printf("\n");
		temp++;
	}
}



