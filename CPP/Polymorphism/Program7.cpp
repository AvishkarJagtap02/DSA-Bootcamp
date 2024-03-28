// Early Binding and Late Binding ----> (Early binding - CompileTime Binding ,,,, Late binding - >> static Binding)
//Late Binding: addresses of functions are mapped during run time
#include<iostream>
void add(int x,int y) {
	std::cout << x + y << std::endl;
}
void sub(int x, int y) {
	std::cout << x - y << std::endl;
}
void mul(int x , int y) {
	std::cout << x * y << std::endl;
}
int main() {
	int n;
	std::cout<<"Enter a choice between 1 ->add / 2-> sub  / 3 -> mul "<<std::endl;
	std::cin>> n;

	void(*funPtr)(int,int) = NULL;
	
	switch(n) {	
		case 1:
			funPtr = add;
			break;
		case 2:
			funPtr = sub;
			break;
		case 3:
		       funPtr = mul;
	       	       break;	       
	}
	funPtr(10,20);
	return 0;
}
