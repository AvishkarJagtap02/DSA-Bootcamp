#include<stdio.h>
#include<string.h>
struct CricPlayer {

	int JerNo;
	char pName[20];
	float sal;
}obj1 = {18,"Virat",5.0};
void main() {
	struct CricPlayer obj2;
	obj2.JerNo = 45;
	strcpy(obj2.pName , "Rohit");
	obj2.sal = 5.0;

	printf("%d\n",obj1.JerNo);
	printf("%s\n",obj1.pName);
	printf("%f\n",obj1.sal);


	printf("%d\n",obj2.JerNo);
	printf("%s\n",obj2.pName);
	printf("%f\n",obj2.sal);
}
