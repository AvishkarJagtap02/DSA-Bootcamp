#include<iostream>

class Parent {
	int x = 10;

	protected: 
	int y = 20;

	public: 
	int z = 30;

	Parent() {
		std::cout<< "Parent Constructor" << std::endl;
	}
};

class Child: protected Parent {
	public: 
		Child() {
			std::cout<< "Child Constructor" << std::endl;
		}
};

int mamin() {
	Child obj;

	std::cout<< obj.x << obj.y << obj.z << std::endl;
	return 0;
}
