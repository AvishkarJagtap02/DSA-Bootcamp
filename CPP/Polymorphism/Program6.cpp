// Early Binding and Late Binding ----> (Early binding - CompileTime Binding ,,,, Late binding - >> static Binding)
// early binding : Function calls are already binded to perticular function or task // adresses are already mapped
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
	std::cout<<"Enter a choice between 1 / 2 / 3"<<std::endl;
	std::cin>> n;
	
	switch(n) {	
		case 1:
			add(10,20);
			break;
		case 2:
			sub(20,10);
			break;
		case 3:
		       mul(10,20);
	       	       break;	       
	}
	return 0;
}
