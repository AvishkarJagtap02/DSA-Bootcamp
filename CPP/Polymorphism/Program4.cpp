//final andoverride identifiers in cpp
#include<iostream>

class Parent {

	public:
	virtual	Parent* getData() final  {

			std::cout<<"Parent getData "<<std::endl;
			return new Parent();
			//return this
		}
};
class Child final: public Parent {
	public: 
		Parent *getData() {		//Child* getData()
			std::cout << "Child getData" <<std::endl;
			return new Child;
			//return this
		}
};
int main() {
	Parent *obj = new Child();
	obj->getData();
}
