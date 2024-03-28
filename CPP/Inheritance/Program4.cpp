#include<iostream> 

class Parent { 
	
	int x = 10;
	int y = 20;

	public:
		int a = 50;
		Parent() {
			std::cout<<"Parent Constructor" << std::endl;
		}
		~Parent() {
			std::cout<<"Parent Constructor" << std::endl;
		}
		void getData() {

			std::cout<< x <<" "<< y <<" "<< a <<std::endl;
		}
};

class Child : public Parent {
	int z = 10;

	public:
		Child() {
			std::cout<< "Child Constructor" <<std::endl;
		}
		~Child() {
			std::cout<< "Child Desstructor" <<std::endl;
		}
		void printData() {

			std::cout<< a <<" "<< z <<std::endl;
		}
};
int main() {
	Child obj2;

	obj2.getData();
	obj2.printData();
	return 0;
}
