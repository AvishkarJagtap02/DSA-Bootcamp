#include<iostream>
 
class Parent {
	int x = 10;
	int y = 20;

	public:
		void printData() {

			std::cout<< x << std::endl;
			std::cout<< y << std::endl;

		}
};
class Child: public Parent {
	int z = 30;
	public: 
	void getData() {
		std::cout<< z << std::endl;
	}
};

int main() {
	Parent obj1;
	Child obj2;

	std::cout<< sizeof(Parent) << std::endl;
	std::cout<< sizeof(Child) << std::endl;

	return 0;
}
