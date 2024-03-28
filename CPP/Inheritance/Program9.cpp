#include <iostream>

class Parent {
	int x = 10;

	public:
		Parent() {
			std::cout<< "Parent" <<std::endl;
		}
		friend std::ostream& operator<<(std::ostream& out, const Parent& obj) {
			std::cout << "In Parent" << std::endl;
			std::cout<< obj.x;
			return out;
		}
		Parent(Parent& obj) {
			std::cout<< "Copy" << std::endl;
		}
};

class Child: public Parent {
	int x = 20;

	public:
		Child() {
			std::cout<< "Child" <<std::endl;
		}
		friend std::ostream& operator<<(std::ostream& out, const Child& obj) {
			std::cout << "In Child" << std::endl;
			std::cout<< obj.x;
			return out;
		}
};
int main() {
	Child obj1;
	std::cout<< (const Parent)obj1 << std::endl; //copy
	//std::cout<< (const Parent&)obj1 << std::endl; //No call to copy

	Child obj2;
	std::cout<< (const Parent)obj2 << std::endl;
	//operator<<(ostream&,Child&)
	return 0;
}
