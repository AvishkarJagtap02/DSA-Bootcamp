#include<iostream>

class Parent1 {
	public:
		Parent1(){
			std::cout<< "Constructor.Parent1" <<std::endl;

		}
};	
class Parent2 {
	public:
		Parent2(){
			std::cout<< "Constructor.Parent2" <<std::endl;

		}
};	

class Child : public Parent1, public Parent2 {
	public: 
		Child() {
			std::cout<< "Constructor.Child" <<std::endl;
		}
};
int main() {
	Child obj;
	return 0;
}
