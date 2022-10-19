
#include <stdio.h>
void main() {
	int x = 5;
	int ans;
	ans = x++ + x++;
	printf("%d\n",x);	//7
	printf("%d\n",ans);	//11
}
