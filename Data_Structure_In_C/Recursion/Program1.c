//recurring fun call ------------>segmentation fault
#include<stdio.h>
void fun() {
	printf("In Fun\n");
	fun();
}
void main() {
	fun();
}
