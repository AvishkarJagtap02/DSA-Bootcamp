#include<stdio.h>
void main() {
	int x = 9;
	int ans,ans1,ans2,ans3;
	ans = ++x + x++ + ++x;

	printf("ans = %d\n",ans);
	printf("x = %d\n",x);
	
	ans1 = ++x + ++x + ++x + ++x;
	printf("ans1 = %d\n",ans1);
	printf("x = %d\n",x);

	ans2 = x++ + x++ + ++x + x++ + ++x;
	printf("ans2 = %d\n",ans2);
	printf("x = %d\n",x);

	ans3 = x++ + x++ + x++ + x++;
	printf("ans3 = %d\n",ans3);
	printf("x = %d\n",x);
}

