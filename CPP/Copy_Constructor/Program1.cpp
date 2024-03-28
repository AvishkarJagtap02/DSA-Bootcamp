#include<iostream>
class Demo {
	
	int x = 10;
	int y = 20;

	public:
	Demo() {
		std::cout<<"No Args"<<std::endl;
	}

	Demo(Demo &ref) {

		std::cout<<"Copy"<<std::endl;
	}
	Demo(int x , int y) {
		this->x = x;
		this->y = y;
		std::cout<<"In Para"<<std::endl;
	}
	void access() {
		
		std::cout<< x << y <<std::endl;
	}
	Demo info(Demo &obj) {
		
		obj.x = 700;
		obj.y = 800;

		return obj;
	}
};

int main() {
	
	int a,b;
	
	Demo obj1;	
	//obj1.access();
	
	Demo obj2(100,200);
	obj2.access();
	
	//Demo obj3 = obj2.info(obj1);
	Demo obj3 = obj2;
	obj3.access();

	return 0;
}
