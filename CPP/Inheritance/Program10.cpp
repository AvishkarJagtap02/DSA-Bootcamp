#include<iostream>

class parent { 
	int x = 10;

	protected:
	int y = 20;

	public: 
	int z = 30;

	void getData() {
		std::cout<< "In getData" << std::endl;
	}
};

class Child : public Parent {
/*
	using Parent::getData;
	public:
		using Parent::y;
*/
	void getData() = delete;
};

int main() {
	
	Child obj;
	std::cout<< obj.y << obj.x << obj.z << std::endl;
	obj.getData();	//Error : Calls deleted function
	return 0;
}
