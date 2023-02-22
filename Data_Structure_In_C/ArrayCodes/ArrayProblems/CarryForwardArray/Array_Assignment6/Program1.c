//Special Subsequence AG
//ABCGAG
#include<stdio.h>
int findSubsequences(char *str) {
	char ptr = *str;
	int count = 0;
	for(int i=0;str[i]!='\0';i++) {
		if(str[i] == 'A') {
			for(int j = i+1;str[j]!='\0';j++) {
				if(str[j]=='G') {
					count++;
				}
			}
		}
	}
	return count;
}
void main() {
	char str[] = "ABCGAG";
	int cnt = findSubsequences(str);
	printf("%d\n",cnt);

}
	
