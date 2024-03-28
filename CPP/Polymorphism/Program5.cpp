// Override annotation
#include<iostream>

class Parent {

	public:
	virtual	void getData(int x)  const {

			std::cout<<"Parent getData "<<std::endl;
	}
};
class Child : public Parent {	
	public: 
		void getData(int x)const override{				//final and override are special identifiers
			std::cout << "Child getData" <<std::endl;
		}
};
int main() {
	Parent *obj = new Child();
	obj->getData(10);
}

/* 
 * While overriding if one method is const then other must be constant */
