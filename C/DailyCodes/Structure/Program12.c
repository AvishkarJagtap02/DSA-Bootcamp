#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Player {
	char pName[20];
	int jerNo;
	float rev;
};
void main() {
	struct Player obj1 = {"virat",18,980.50};
	struct Player obj2 = {"Messi",10,450.50};
	struct Player obj3 = {"James",6,950.50};
	
	struct Player arr[3] = {obj1,obj2,obj3};

	for(int i=0;i<3;i++) {
		
		printf("%s\n",arr[i].pName);
		printf("%d\n",arr[i].jerNo);
		printf("%f\n",arr[i].rev);
	}
}
