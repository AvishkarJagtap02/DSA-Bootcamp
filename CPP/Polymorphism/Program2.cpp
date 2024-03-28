//method signature and return type is same
#include<iostream>

class Parent {

	public: 
		Parent() {
			std::cout<< "Parent Constructor" <<std::endl;
		}
		virtual void getData(int x) {
			std::cout<< "Parent GetData" <<std::endl;
		}
		virtual void printData(float x) {
			std::cout<< "Parent printData" << std::endl;
		}
};
class Child : public Parent {
	public: 
		Child() {
			std::cout<<"Child Constructor" <<std::endl;
		}
		//overriding ----> not allowed 
		virtual void getData() {	//implicitely virtual
			std::cout<<"Child getData()" <<std::endl;
		}
		void printData(float x) {
			std::cout<< "Child printData" << std::endl;
		}
};	
int main() {
	// object reference and pointers in overriding
	//Type -1
	Parent *obj = new Child();
	obj->getData(10);
	obj->printData(10.5f);
	return 0;

	//Type2
	Child obj1;
	Parent *obj2 = &obj1;
	obj2->getData(10);
	obj2->printData(10.5f);
	
/*	//Type3
	Child obj1;
	Parent& obj2 = obj1;
	obj2.getData(10);
	obj2.printData(10.5f);*/
}
