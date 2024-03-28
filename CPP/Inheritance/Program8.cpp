#include<iostream>

class Parent {
	int  = 30;
	public:
		Parent {
			std::cout<< "Constructor Parent" <<std::endl;
		}
		void getData() {

			std::cout<< "Parent x = " << x <<std::endl;
		}
};

class Child: public Parent {
	int x = 20;

	public:
		child() {

			std::cout<< "Constructor Child" <<std::endl;
		}
		void getData() {
			Parent::getData();
			std::cout<< "Child x = " << x <<std::endl;
		}
};

int main() {
	Child obj;
	//obj.getData();
	
	//2nd
	//(Parent(obj)).getData();
	
	//3rd
	//obj.Parent::getData();
	
	//4th
	(static_cast<Parent>(obj)).getData();

	return 0;
}
